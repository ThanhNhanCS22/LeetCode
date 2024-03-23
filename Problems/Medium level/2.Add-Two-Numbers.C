/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int data) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    /*if (newNode == NULL) {
        
        exit(1);
    } */
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int num = (l1 -> val + l2->val) %10  ; 
    int remainder = (l1 -> val + l2->val) / 10 ; 
    struct ListNode* l3 = createNode(num) ;
    struct ListNode* l4 =  l3;
    l1 = l1 -> next ; 
    l2 = l2 -> next ;
    if (l1 == NULL && l2 == NULL  && remainder != 0 ) {
        l3->next = createNode(remainder) ; 
        return l3 ; 
    } 
    while (1) {
        
        if (l1 == NULL && l2 != NULL ) {
            num = (remainder+ (l2->val)) %10  ; 
            remainder = (l2->val+remainder) / 10 ;   
            l4 -> next = createNode(num) ; 
            
            l2 = l2 -> next ; 

        }  
        else if (l2 == NULL && l1 != NULL ) {
            num = (remainder+ l1->val) %10  ; 
            remainder = (l1->val + remainder) / 10 ; 
            l4 -> next =  createNode(num) ;  
         
            l1 = l1 ->next ; 
        } 
        else if (l1 != NULL && l2 != NULL )  {
            num = (remainder+ l1 -> val + l2->val) %10  ; 
            remainder = (l1 -> val + l2->val + remainder) / 10 ; 
            l4 -> next = createNode(num) ; 
            
            l1 = l1 -> next ; 
            l2 = l2 -> next ; 
        }
        if (l2 == NULL && l1 == NULL )  {
            if(remainder == 0  ) break ; 
            l4= l4->next; 
            l4->next = createNode(remainder) ;
            remainder = 0 ; 
        } 
    l4 = l4 ->next ; 
    
    }
    return l3 ; 
}
