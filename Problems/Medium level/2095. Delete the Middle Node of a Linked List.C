/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(!head->next) return NULL;   
    struct ListNode* middle = head ; 
    struct ListNode* fast = head ; 
    struct ListNode* prev = middle ; 
    while(fast && fast ->next) {
        prev = middle ; 
        fast = fast->next->next ; 
        middle = middle ->next ; 

    } 
    prev -> next =  middle ? middle->next : NULL ; 
     
    return head;  
}
