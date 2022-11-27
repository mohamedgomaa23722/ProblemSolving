  //Link : https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
  
    void postOrder(Node *root) {
        if(!root){
            return;
        }
        
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
