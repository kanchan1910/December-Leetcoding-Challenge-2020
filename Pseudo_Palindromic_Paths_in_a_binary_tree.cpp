class Solution {
public:
    int fun(TreeNode* root,vector<int>&freq){
        if(root==NULL){
            //terminating condition
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
        //reached end of path i.e leaf node
            int count=0;
            freq[root->val]++;
            for(auto x:freq){
                if(x%2!=0){
                    count++;
                }
            }
            freq[root->val]--;
            if(count>1){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
         freq[root->val]++;
         int ans=fun(root->left,freq)+fun(root->right,freq);
         freq[root->val]--;
         return ans;
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root==NULL){
            return 0;
        }
     vector<int>freq(10,0);
     //frequency vector 
        return fun(root,freq);
    }
};
