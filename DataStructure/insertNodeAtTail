// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
 Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
 
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
     SinglyLinkedListNode * temp = head;
     
    if (!head) {
        head = new SinglyLinkedListNode(data);
        return head;
    }
    
    while(temp->next){
        temp = temp->next;
    }
    
    temp->next = new SinglyLinkedListNode(data);
 
   return head;
}
