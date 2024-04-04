/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode* Node1 = head ; 
    struct ListNode* Node2  = head ; 
    int index2 = 0 ; 
    int index3 = 0 ; 
    int *arr = malloc(1001 * sizeof(int)) ; 
    int *indexArr= malloc(1001 * sizeof(int)) ;
    int index = 0 ; 
    while(Node1 != NULL){
        arr[index] = Node1-> val ; 
        indexArr[index] = 0 ; 
        index++ ; 
        Node1 = Node1-> next ; 

    } 
    while(index2< index) {
        int sum = 0 ; 
        while(index3 < index) {
            sum+=arr[index3];  
            if(sum == 0 ){
                for(int i = index2 ; i <= index3 ; i++){
                    indexArr[i] =  1 ; 
                    
                }
                index2 = index3 ; 
                break ; 
            }
            index3 ++ ; 
        }
        index2 ++ ; 
        index3 = index2 ; 
    }
    int check = 0 ; 
    for(int i = 0 ; i < index; i++ ){
        if(indexArr[i] != 1  ){
            Node2->val = arr[i]  ; 
            indexArr[i] = 1;  
            check = 1; 
            break ;  
        }
    }
    if(check == 0) return NULL; 
    Node1 = Node2; 

    for(int i = 1 ; i < index; i ++ ) {
        if(indexArr[i] != 1){
            Node1 = Node1 -> next ; 
            Node1->val = arr[i]; 
             
        } 
    }
    Node1->next= NULL ; 
    
    return Node2 ; 
}
