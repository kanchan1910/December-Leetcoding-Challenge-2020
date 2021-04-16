
class BSTIterator {
public:
    vector<int>v;
    int itr=0;
     void inorder(TreeNode *root){
        if(root==NULL)
        {
            return;
        }
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
      return v[itr++];
    }
    
    bool hasNext() {
        if(itr>=v.size()){
            return false;
        }
        return true;
    }
};

