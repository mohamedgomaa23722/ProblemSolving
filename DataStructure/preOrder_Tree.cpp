/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
 //Link : https://www.hackerrank.com/challenges/tree-preorder-traversal/problem?isFullScreen=true
    void preOrder(Node *root) {
       if (!root){
           return;
       }
       cout<<root->data<<" ";
       preOrder(root -> left);
       preOrder(root -> right);
        
    }
