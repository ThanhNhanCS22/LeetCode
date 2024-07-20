/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* createNode(int val) {
    struct ListNode* newNode = malloc(sizeof(struct ListNode) ) ;
    newNode-> val = val ; 
    newNode->next = NULL  ; 
    return newNode ;  
} 

struct ListNode* swapNodes(struct ListNode* head, int k) {
    int arr[100000] ; 
    int idx = 0 ; 
    while(head) {
        arr[idx++] = head->val ; 
        head = head -> next;   
    } 
    int temp = arr[k -1 ]; 
    arr[k-1] = arr[idx - k]; 
    arr[idx-k] = temp; 

    head = createNode(arr[0]) ; 

    struct ListNode* tempNode  =  head;

    for(int i = 1 ; i < idx ; i ++) { 
        tempNode->next = createNode(arr[i]) ;
        tempNode = tempNode->next ; 

    }  
    return head ; 


}
