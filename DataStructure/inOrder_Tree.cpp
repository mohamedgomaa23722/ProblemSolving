   //Link : https://www.hackerrank.com/challenges/tree-inorder-traversal/problem?isFullScreen=true
    
    void inOrder(Node *root) {
        if(root->left){
          inOrder(root->left);
        }
        
        cout<<root->data<<" ";

        if(root->right){
           inOrder(root->right);
        }
        return;
    }
