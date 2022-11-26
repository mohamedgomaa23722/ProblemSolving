/*
 * Complete the 'removeDuplicates' function below.
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

//Link : https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?h_r=next-challenge&h_v=zen&isFullScreen=true

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode * prevNode = llist;
    SinglyLinkedListNode * nextNode = llist->next;
    
    while (nextNode) {
      if ((prevNode->data != nextNode->data)) {
          prevNode->next = nextNode;
          prevNode = nextNode;
      }
      
      if(!nextNode -> next){
          if(prevNode->data == nextNode->data){
               prevNode->next = NULL;
            }    
      }
      
      nextNode = nextNode->next;
      }
    return llist;
}
