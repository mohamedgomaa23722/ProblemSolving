/*
 * Complete the 'reversePrint' function below.
 *
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
//Link : https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

void reversePrint(SinglyLinkedListNode* llist) {
    if (!llist->next) {
         cout<<llist->data<<endl;
         return;
    } 
      
    int size=0;
    SinglyLinkedListNode *temp = llist;
 
    while (temp->next->next) {
        temp = temp->next;
    }
     cout<<temp->next->data<<endl;
     temp->next =NULL;
     reversePrint(llist);
}

