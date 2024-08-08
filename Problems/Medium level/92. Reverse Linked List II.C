/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head, int k ) {
    struct ListNode *previous = NULL;
    struct ListNode* current = head;
    int count = 0 ; 
    while(count != k ){
        struct ListNode* next = current->next;
        current-> next = previous ;
        previous = current;
        current = next;
        count++; 
    }
   return previous ;     
}
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    int findLeft = 1  ; 
    struct ListNode* currHead = head; 
    while( findLeft < left - 1  ){
        findLeft++; 
        currHead  = currHead->next ; 
    }

    int findRight = left; 
    struct ListNode* currTail = (left == 1 ) ?  currHead : currHead->next ; 
    while(findRight  < right ){ 
        findRight ++; 
        currTail= currTail->next;  

    } 
    currTail = currTail->next ; 
    struct ListNode * temp = (left == 1 ) ? currHead :  currHead->next; 
    if(left == 1 ) head = reverseList(temp, right- left +1 ) ; 
    else currHead->next = reverseList(temp, right- left +1 ) ; 
    temp-> next = currTail ; 

    return head ;
    
   

}
