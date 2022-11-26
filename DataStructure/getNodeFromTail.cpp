/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
//Link : https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int size =0;
    SinglyLinkedListNode* temp = llist;
    while (temp) {
        temp  = temp -> next;
        size++;
    }
    
    size-=positionFromTail+1;
    while (size !=0) {
        llist  = llist -> next;
        size--;
    }
    return llist ->data ;
}
