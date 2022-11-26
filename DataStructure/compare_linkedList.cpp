// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 Link :https://www.hackerrank.com/challenges/compare-two-linked-lists/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while (head1) {
        if (head1->data != head2->data || 
            (head1 ->next && !head2->next) ||
             (head1 ->next && !head2->next)) {
            return 0;
        }
        
        head1 = head1 ->next;
        head2 = head2 ->next;
    }
    return 1;
}
