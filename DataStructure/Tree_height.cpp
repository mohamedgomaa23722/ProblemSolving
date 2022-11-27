/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

//link:https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true

    int height(Node* root) {
        // Write your code here.
        if(!root->left && !root->right){
            return 0;
        }
        int leftLen=1;
        int rightLen=1;

        if(root->left){
            leftLen+=height(root->left);
        }
        
        if(root->right){
            rightLen += height(root->right);
        }
        
        return (leftLen > rightLen)? leftLen:rightLen;
    }

//Answer Optimization

    int height(Node* root) {
        // Write your code here.
        if(!root){
            return -1;
        }
        int leftLen=height(root->left);
        int rightLen=height(root->right);
        
        return ((leftLen > rightLen)? leftLen:rightLen)+1;
    }
