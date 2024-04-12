/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
   
    struct ListNode *temp = head;
    if(head == NULL || head->next ==NULL)   return head; 
    temp = head;
    head = head ->next ; 
    temp ->next = temp  ->next->next; 
    
    head ->next = temp ; 

    struct ListNode *l1  = head ->next  ; 
    
    
    while(l1->next!= NULL && l1->next->next!= NULL  ){
        temp = l1->next ; 
        struct ListNode *l2 = l1 -> next; 
        l2  = l2 ->next;
        temp ->next = temp->next->next; 
        
        l2 ->next  = temp ; 
        l1->next = l2 ; 
        l1 = l1->next->next ;
    } 
    return head ; 
}
