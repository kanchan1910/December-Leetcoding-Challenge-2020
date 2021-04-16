class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
         unordered_map<int, int> m;
        int ans = 0;
         for (int i = 0; i < n; ++i)
        {
            int tmp = time[i] % 60;
            ans += m[tmp > 0 ? 60-tmp : 0];
            m[tmp]++;
        }
       return ans; 
    }
};
       
       
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
     int n=time.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((time[i]+time[j])%60==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};
//tle
