class Solution {
public:
    //next permutation function will give the next lexicographically  number permutaion whcih is the case in this questionb 
    
    int nextGreaterElement(int n) {
       string tmp=to_string(n);
        if(next_permutation(tmp.begin(),tmp.end())==true){  //exist kr ri h

            long long ans=stoll(tmp);
            if(ans>INT_MAX){
                //exist kr ri h pr jo uski next permutation h vo int_max se jyada ja ri h
                return -1;
            }
            else{
                return ans;
           }
        }
        else{

            return -1;
        }
    }
};
