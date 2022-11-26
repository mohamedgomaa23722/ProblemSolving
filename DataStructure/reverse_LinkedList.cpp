/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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
// Link : https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
   if (!llist->next) {
       return llist;
   }
   SinglyLinkedListNode* temp = llist;
   
   while(temp ->next->next){
       temp= temp->next;
   }
   
    SinglyLinkedListNode * reversedLinkedList= new SinglyLinkedListNode(temp->next->data);
    temp->next=NULL;
    cout<<reversedLinkedList ->data;
   reversedLinkedList->next = reverse(llist);
   
   return reversedLinkedList;
}
