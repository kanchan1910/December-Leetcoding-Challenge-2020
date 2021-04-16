class Solution {
public:
    TreeNode* dummy=new TreeNode(NULL);
    TreeNode * ptr=dummy;
    void inorder(TreeNode* head){
        if(head==NULL){
            return;
        }
        inorder(head->left);
        ptr->right=new TreeNode(head->val);
        ptr=ptr->right;
        inorder(head->right);
        return;
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return dummy->right;
    }
};
