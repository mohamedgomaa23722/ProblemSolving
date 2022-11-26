/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

//Link : https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
   if (position == 0) {
    return llist->next;   
   }
   
   SinglyLinkedListNode* temp =llist;
   int index =0;
   
   while(index != position-1){
       temp = temp->next;
       index++;
   }
    
    temp->next = temp->next->next;
       
   return llist;
}
