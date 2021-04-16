
class Solution {
public:
bool fun(TreeNode* root, long min, long max){
    if(root == NULL){
        return true;
    }
    if(root -> val > min && root -> val < max){
        return fun(root->left, min, root->val)&&fun(root->right, root->val, max);
    }
    return false;
}
bool isValidBST(TreeNode* root) {
    return fun(root, LONG_MIN, LONG_MAX);
}
};




class Solution {
public:
    vector<int>v;
void fun(TreeNode* root){
    if(root == NULL){
        return;
    }
    fun(root->left);
    v.push_back(root->val);
    fun(root->right);
}
bool isValidBST(TreeNode* root) {
  if(root==NULL){
      return true;
  }
    fun(root);
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            return false;
        }
    }
    return true;
}
};

//left node data<node data
//right node data>node data
// above two points should be fulfilled in all subtreess also

