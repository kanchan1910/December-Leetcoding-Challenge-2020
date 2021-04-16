
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(abs(left-right)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right); 
    }
};
