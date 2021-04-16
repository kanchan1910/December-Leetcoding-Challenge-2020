class Solution {
public:
    int dp[101];
    int fun(string str,int n){
        if(str[0]=='0'){
            return 0;
        }
        if(n==0||n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int count=0;
        if(str[n-1]!='0'){
            count=fun(str,n-1);
        }
        if(str[n-2]=='1'||(str[n-2]=='2'&&str[n-1]<'7')){
            count+=fun(str,n-2);
        }
        return dp[n]=count;
    }
    int numDecodings(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        return fun(s,n);
        
    }
};//memoization

class Solution {
public:
    int fun(string str,int n){
    int dp[n+1];  
    dp[0] = dp[1] = 1; 
    if(str[0]=='0')   
         return 0; 
    for (int i = 2; i <= n; i++) 
    { 
        dp[i] = 0; 
  
        if (str[i-1] != '0') 
        {
            dp[i] = dp[i-1]; 
        }
 
        if (str[i-2] == '1' ||(str[i-2] == '2' && str[i-1] < '7')) {
            dp[i] += dp[i-2]; 
        }
    } 
    return dp[n];  
    }
    int numDecodings(string s) {
        int n=s.length();
        return fun(s,n);
        
    }
};
//tabulation
