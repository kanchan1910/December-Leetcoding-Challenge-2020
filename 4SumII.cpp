class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int ans=0;
       //a+b+c+d=0
        //a+b=-(c+d)
        unordered_map<int,int>m;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                m[(A[i]+B[j])]++;
            }
        }
        for(int k=0;k<C.size();k++){
            for(int l=0;l<D.size();l++){
               if(m.find(-(C[k]+D[l]))!=m.end()){
                   ans+=m[-(C[k]+D[l])];
               }
            }
        }
        return ans;
    }
};
//tc o(n^2)
//sc o(n)
//accepted

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int ans=0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                for(int k=0;k<C.size();k++){
                    for(int l=0;l<D.size();l++){
                        if((A[i]+B[j]+C[k]+D[l])==0){
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
//tle
//tc o(n^4) approx 500^4~10^8
//sc o(1)
