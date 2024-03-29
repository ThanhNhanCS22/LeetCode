/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reverseValInList(struct ListNode* head, struct ListNode** reverseHead, int count, int* halfLen) { 
    if(head == NULL) {
        *halfLen = count / 2 ; 
        return ;
    } 
    count++ ; 
    reverseValInList(head->next, reverseHead, count, halfLen)  ; 
    if(count>*halfLen){ 
        int temp = (*reverseHead)->val  ; 
        (*reverseHead)->val = head->val ; 
        head -> val = temp ; 
        *reverseHead = (*reverseHead )->next;      
    }                           
}
struct ListNode* reverseList(struct ListNode* head) {
    int count = 0 ; 
    int halfLen ; 
    struct ListNode* reverseHead = head ;  
    reverseValInList(head, &reverseHead, count, &halfLen )  ;

    return head ;   


    
}
