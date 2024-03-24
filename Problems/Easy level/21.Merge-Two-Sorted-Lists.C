
/*struct ListNode {
      int val;
      struct ListNode *next;
 };*/
struct ListNode* createNode(int data) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        
        exit(1);
    }
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* list3 ; 
    if (list1 == NULL && list2 != NULL ){
        
        return list2 ; 

    } 
    else if (list2 ==NULL  && list1 != NULL ){
        
        return list1 ; 
    }
    else if(list1  == NULL  && list2 == NULL) {
        return list1 ; 
    }
    if(list1 -> val <= list2 -> val ) {
        list3 =  createNode(list1->val) ; 
        list1 = list1 -> next ; 
    }

    else { 
        list3 =  createNode(list2->val) ; 
        list2 = list2 -> next ; 
    }

    struct ListNode* list4 = list3  ; 

    while (list1 != NULL || list2 != NULL ){
        if (list1 != NULL && list2 != NULL ) { 
            if(list1 -> val <= list2 -> val ) {
                list4->next =  createNode(list1->val) ; 
                list1 = list1 -> next ; 
            }
            else { 
                list4->next =  createNode(list2->val) ; 
                list2 = list2 -> next ; 
            }
            list4 = list4 -> next  ; 
        } 
        else if(list1 != NULL && list2 == NULL){
            list4->next = createNode(list1->val); 
            list1 = list1 -> next;
            list4 = list4->next ;  

        } 
        else if(list1 == NULL && list2 != NULL) {
            list4 -> next = createNode(list2->val) ; 
            list2 = list2 -> next; 
            list4 = list4 -> next  ; 

        }
 
    }
    return list3 ; 

}
