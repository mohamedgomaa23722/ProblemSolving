/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
// Link : https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=true

void findBiggerElement(DoublyLinkedListNode*& llist,int & isEnd, int data){
    while (llist->data < data && llist->next ) {
      llist = llist->next;
    }
    if (llist->data < data) {
        isEnd = 1;
    }
}

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode * temp = llist;
    DoublyLinkedListNode * newNode = new DoublyLinkedListNode(data);
    int isEnd =0;
    
    findBiggerElement(temp,isEnd,data);
    
    if (temp == llist) {
        //Here if at the startPosition
        llist ->prev = newNode;
        newNode->next = llist;
        llist = llist->prev;
    }else if(isEnd == 1){
        //Here if at the EndPosition
        newNode ->prev = temp;
        temp-> next = newNode;
    }else{
        //Here if at the General case like at any mid position
        temp->prev->next = newNode;
        newNode -> prev = temp->prev->next;
        temp -> prev = newNode;
        newNode -> next = temp;
    }
    return llist;
}
