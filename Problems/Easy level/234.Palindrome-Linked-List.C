/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void checkPalindrome(bool *check, struct ListNode**left, struct ListNode*right){
    if(right == NULL ) return; 
    checkPalindrome(check, left, right->next) ; 
    if(right->val != (*left)->val ) *check = 0 ; 
    (*left) =(*left)->next; 

    
} 
bool isPalindrome(struct ListNode* head) {
    bool check = 1 ; 
    checkPalindrome(&check, &head, head) ; 
    return check ; 

}
