/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL )return NULL;  
    struct ListNode* move = head;  
  
    while(move -> next  != NULL ) {
        if (move->val == move->next->val ){
            move ->next= move->next->next;  
            continue ;      
        }
       
        move=move->next ;
    } 
    return head ; 
}
