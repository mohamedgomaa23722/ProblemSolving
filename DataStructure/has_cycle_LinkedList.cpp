// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
// Link : https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true
  
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head->next->next;

    while (slow && fast && fast ->next) {
        if(slow ==fast) return 1;
        slow = slow->next;
        fast = fast->next->next;
    }
    return 0;
}
