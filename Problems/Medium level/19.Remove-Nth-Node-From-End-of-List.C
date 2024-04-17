/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* Node1 = head;
   
    int numberOfStep = 1 ; 
    

    while(Node1 -> next != NULL ) { 
        Node1 = Node1-> next ; 
        numberOfStep++; 

    } 
    if(numberOfStep == n ) {
        head = head-> next ; 
        return head ; 
    } 
    numberOfStep = numberOfStep - n + 1 ; 
  
    int countStep = 1 ; 
    Node1 = head ; 
    while( countStep < numberOfStep -1   ) { 
        Node1 = Node1-> next ; 
        countStep++; 
    }
  
    Node1 ->next = Node1 ->next ->next ; 
    return head; 

    
}
