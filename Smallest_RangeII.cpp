class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
       int n=A.size();
        sort(A.begin(),A.end());
        int ans=A[n-1]-A[0];
        for(int i=0;i<n-1;i++){
            if(A[i]!=A[i+1]){
                ans=min(ans,max(A[n-1]-K,A[i]+K)-min(A[0]+K,A[i+1]-K));
            }
        }
        return ans;
    }
};
