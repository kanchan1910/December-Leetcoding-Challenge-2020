class Solution {
public:
    string decodeAtIndex(string S, int K) {
       long new_string=0;
        for(int i=0;i<S.length();i++){
            if(isdigit(S[i])){
                new_string*=(S[i]-'0');
            }
            else{
                new_string++;
            }
        }
        string ans="";
        for(int i=S.length()-1;i>=0;i--){
            K%=new_string;
            if(K==0&&isalpha(S[i])){
                ans+=S[i];
                break;
            }
            if(isdigit(S[i])){
                new_string/=(S[i]-'0');
            }
            else{
                new_string--;
            }
        }
        return ans;
    }
};
