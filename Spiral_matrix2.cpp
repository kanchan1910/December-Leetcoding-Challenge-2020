class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>ans(n,vector<int>(n));
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int num=1;
        while(top<=down&&left<=right){
            for(int i=left;i<=right;i++){
                ans[top][i]=num++;
            }
            top++;
            for(int i=top;i<=down;i++){
                ans[i][right]=num++;
            }
            right--;
            for(int i=right;i>=left;i--){
                ans[down][i]=num++;
            }
            down--;
            for(int i=down;i>=top;i--){
                ans[i][left]=num++;
            }
            left++;
        }
        return ans;
    }
};




class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {  vector<int>ans;
       int top=0;
       int down=r-1;
       int left=0;
       int right=c-1;
       int dir=0;
       while(top<=down&&left<=right){
           if(dir==0){
               for(int i=left;i<=right;i++){
                   ans.push_back(matrix[top][i]);
               }
               top++;
           }
           else if(dir==1){
               for(int i=top;i<=down;i++){
                   ans.push_back(matrix[i][right]);
               }
               right--;
           }
          else if(dir==2){
               for(int i=right;i>=left;i--){
                   ans.push_back(matrix[down][i]);
               }
               down--;
           }
         else if(dir==3){
               for(int i=down;i>=top;i--){
                   ans.push_back(matrix[i][left]);
               }
               left++;
           }
           dir=(dir+1)%4;
       }
       return ans;
    }
};
//related ques on printing spiral matrix
