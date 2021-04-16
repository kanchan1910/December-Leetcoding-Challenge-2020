class Solution {
public:
    Node* connect(Node* root) {

        if(root==NULL){
         return NULL;   
        }
        queue<Node* > q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* temp = q.front();
                q.pop();
                if(i==n-1){
                    temp->next = NULL;
                }else{
                     temp->next = q.front();
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }if(temp->right!=NULL)
                    q.push(temp->right);   
                
            }
        }
        return root;
    }
};
