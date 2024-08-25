/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    *returnSize = 0 ;
    if(!numsSize) return NULL ; 

    char **result = malloc(sizeof(char*) ); 
    long  numMove = nums[0] ;
    int numStart = nums[0];  
    
    char range[25] ; 

    for(int i = 0 ; i < numsSize ; i++) {
        if(nums[i] != numMove  ) {
            if (numMove - 1 == numStart ) sprintf(range,"%d",numStart) ;  
      MM
            else sprintf(range, "%d->%d", numStart, numMove - 1);  
            
            result= realloc(result,(++*returnSize)*sizeof(char*)) ; 
            result[ (*returnSize) - 1 ] =  malloc(sizeof(char) *(strlen(range) + 1 ) ) ; 
            strcpy(result[ (*returnSize) -1 ], range  ) ; 
            numMove = nums[i] ; 
            numStart = nums[i] ; 

        }
        numMove ++; 
    }
     
    if (numMove - 1 == numStart )  sprintf(range,"%d",numStart) ;  
    else sprintf(range, "%d->%d", numStart, numMove - 1);  
    
    result= realloc(result,(++*returnSize)*sizeof(char*)) ; 
    result[ (*returnSize) - 1 ] =  malloc(sizeof(char) *(strlen(range) + 1 ) ) ; 
    strcpy(result[ (*returnSize) -1 ], range  ) ;  

    return result ; 
}
