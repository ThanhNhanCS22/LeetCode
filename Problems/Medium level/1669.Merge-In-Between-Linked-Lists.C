/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *moveList2 = list2 ;  
    struct ListNode *find_a_InList1 = list1 ; 
    
    int counterA = 0 ;
      
    while(moveList2 -> next != NULL ){
        moveList2 = moveList2->next; 

    } 
    while (counterA + 1 != a) { 
        find_a_InList1= find_a_InList1-> next ; 
        counterA++ ; 

    } 
    struct ListNode *find_b_InList1 = find_a_InList1 ; 
    int counterB = counterA   ;

    while(counterB != b ){
        find_b_InList1 = find_b_InList1 -> next ;  
        counterB++ ; 
    } 
    moveList2->next = find_b_InList1-> next ; 
    find_a_InList1->next = list2 ; 

    return list1;  


}
