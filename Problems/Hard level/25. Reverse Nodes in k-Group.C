/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head, int k ) {
    struct ListNode *previous = NULL;
    struct ListNode* current = head;
    int count = 0 ; 
    while(count != k ){
        struct ListNode* next = current->next;
        current-> next = previous ;
        previous = current;
        current = next;
        count++; 
    }
   return previous ;     
}
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (k == 1 ) return head ; 
    struct ListNode* temp = head; 
    struct ListNode* prev ; 
    int count = 1 ; 

    while(temp) {
        if(count == k) {
            struct ListNode* anotherTemp = temp ->next; 
            temp = head ; 
            head = reverseList(head, k ); 
            temp -> next = anotherTemp ; 
            prev=temp; 
            temp = anotherTemp; 
            count = 1 ; 
            break ; 

        } 
        count++; 
        temp = temp-> next ;


    }

    struct ListNode* secTemp = temp ; 

    while(secTemp ) {
        if(count == k) {

            struct ListNode* anotherTemp = secTemp ->next ; 
            secTemp = temp  ; 
            temp = reverseList(temp, k ); 
            prev->next = temp ; 
            secTemp -> next = anotherTemp ; 
            prev= secTemp ; 
            secTemp = anotherTemp; 
            temp = anotherTemp ;
            count = 1 ; 
            continue;  

        } 
        count++; 
        secTemp = secTemp-> next ;
    } 

    return head ; 
    
}
