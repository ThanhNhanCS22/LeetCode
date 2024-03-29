/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void implementReoder(struct ListNode**head,struct ListNode* ptr){
    if(ptr -> next == NULL ) return ; 

    implementReoder(head,ptr->next ) ; 
    if((*head) != NULL && (*head) -> next != NULL    ) {
        struct ListNode* temp1 = ptr->next; 
        ptr->next = NULL; 
        temp1 ->next = (*head) -> next; 
        (*head)->next = temp1 ; 
        (*head) =  temp1->next  ; 
        
    }  
} 
void reorderList(struct ListNode* head) {
    if(head-> next == NULL ) return  ; 
    struct ListNode* anotherHead = head ;  
    implementReoder(&anotherHead,head); 
    
}
