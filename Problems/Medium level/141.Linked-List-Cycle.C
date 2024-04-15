/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast = head; 
    while(fast!= NULL && fast-> next!= NULL) { 
        head = head -> next ; 
        fast = fast -> next -> next ; 
        if(fast == head ) return 1; 
    
    }
    return 0 ; 

}
//tortoise and hare algo 
