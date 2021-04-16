class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
        //mere phle run time aara tha kyoki m ise matrix.size() likhne ki jgh m==0 
        //likh ri thi pr jb koi row h hi ni to variable m uski size assign krega to run time error to aaega hi na
        if(matrix.size()==0) 
        {
            return ans;
        }
        int m=matrix.size();
        int n=matrix[0].size();
        if(n==1&&m==1){
            ans.push_back(matrix[0][0]);
            return ans;
        }
       
        int i=0,j=0;
        bool up=true;
        for(int k=0;k<m*n;){
            if(up==true){
                for(;i>=0&&j<n;i--,j++){
                    ans.push_back(matrix[i][j]);
                    k++;
                }
                //next turn k lie i and j ko set krna unki shi position pe
                if(i<0&&j<=n-1){
                    i=0;
                }
                if(j==n){
                    i+=2;
                    j--;
                }
            }
            else{
                for(;j>=0&&i<m;i++,j--){
                    ans.push_back(matrix[i][j]);
                    k++;
                }
                 //next turn k lie i and j ko set krna unki shi position pe
                if(j<0&&i<=m-1){
                    j=0;
                }
                if(i==m){
                    i--;
                    j+=2;
                }
            }
            up=!up;
        }
         return ans;
    }
};
