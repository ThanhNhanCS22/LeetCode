/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *temp = node ; 
    while(node->next) {
        temp = node ; 
        node-> val=node-> next->val; 
        node = node ->next ; 

    }
    temp-> next = NULL;  

    // another smarter approach 
    // node->val=node->next->val;
    // node->next=node->next->next;
}
