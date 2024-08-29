/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!head) return NULL;  
    
    struct ListNode *temp = head; 
    int len = 0 ;  

    while(temp -> next ){
        len++; 
        temp = temp->next ; 
    } 

    struct ListNode *temp2 = temp; 
    len++ ; 

    if ( !(k%len)) return head  ; 

    int count = 0 ; 
    temp = head ; 
    struct ListNode* ptrToTail ; 

    while(count != len - (k%len) ){
        ptrToTail = temp ;
        temp = temp->next ; 
        count++ ;  

    }  

    temp = ptrToTail -> next  ; 
    ptrToTail ->next = NULL; 
    temp2->next = head ;

    return temp;
     

}
