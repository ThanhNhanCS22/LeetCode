/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head && head->val == val ){
        head = head->next ; 
    }  
    if (head == NULL ) return NULL ; 
    struct ListNode* curr  =  head->next; 
    struct ListNode* prev  = head;

    while(curr) {
        if(curr->val == val) {
            prev->next = curr->next ; 
            curr = prev->next; 

            continue;  
        } 
        prev= curr; 
        curr= curr->next ; 
    }  
    return head; 


}
