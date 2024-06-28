//O(n^2) approach 
// int* twoSum(int* nums, int numsSize, int target,  int* returnSize ){
    

//     int* out = (int*)malloc(2*sizeof(int)); 
    
//     for (int i = 0 ; i < numsSize -1  ; i++) {
//         for (int j = i + 1; j < numsSize ; j ++){
//             if (target - nums[i] == nums[j]){
//                 out[0] = i ; 
//                 out[1] = j ;
//                 *returnSize = 2 ; 
//                 return out ; 

//             } 
//         }
         
//     }
    
//     *returnSize = 2 ; 
//     out[0] = -1 ;
//     out[1] = -1 ;  
//     return out ;  


// }

//O(n) approach 

typedef struct HashNode {
    int diff;
    int index; 
    struct HashNode *next ; 
}HashNode ;

HashNode *createHashNode(int diff, int index ){
    HashNode* newNode= malloc(sizeof(HashNode))  ; 
    newNode->diff =  diff; 
    newNode->index= index ; 
    newNode->next= NULL; 
    return newNode ; 
}

void Insert(HashNode ** head ,  int diff, int index) {
    if(*head== NULL ) {
        *head = createHashNode(diff, index); 
        return ; 
    }
    HashNode * currNode = *head ; 

    while(currNode-> next != NULL ) currNode = currNode->next ; 
    currNode->next = createHashNode(diff, index) ; 

} 

int Search(HashNode *head, int diff  ) { 
    while(head != NULL ) {
        if(head-> diff == diff ) return head->index ; 
        else head= head->next ;  
    } 
    return -1 ; 
} 


int* twoSum(int* nums, int numsSize, int target,  int* returnSize ){
    
    *returnSize = 2 ; 
    int* resultArr = (int*)malloc(2*sizeof(int)); 
    HashNode  *hashMap[numsSize] ; 
    for (int i = 0; i < numsSize; i++) {
        hashMap[i] = NULL; // Initialize hashMap array
    }

    for (int i = 0 ; i < numsSize ; i++) {
        int index = Search(hashMap[abs((target - nums[i]) % numsSize )  ] , nums[i] );
        if(index != -1 ) {
            resultArr[0]= index; 
            resultArr[1] =  i ; 

            return resultArr; 
        } 
        Insert(&hashMap[abs(nums[i]% numsSize )  ], target - nums[i], i)  ;
    }     

    
    return resultArr  ;  


}








