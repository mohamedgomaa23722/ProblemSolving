// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 Link : https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true
 
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp = head2;
    while (temp) {
        if(head1 == temp){
           return head1 ->data; 
        } 
        temp = temp->next;
        if(!temp) {
            temp = head2;
            head1 =head1->next;
        }
    }
    return -1;
}
