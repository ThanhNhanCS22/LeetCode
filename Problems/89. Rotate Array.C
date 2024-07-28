void rotate(int* nums, int numsSize, int k) {
    int *newArr = malloc(numsSize*sizeof(int) )  ; 
    int pos ; 
    for(int i = 0 ; i < numsSize ; i++) { 
        pos = (i + k)% numsSize ; 
        // while(pos> numsSize - 1 ) pos = pos - numsSize;  
        newArr[pos] = nums[i];
    }  
    for(int i = 0 ; i < numsSize; i ++ ){ 
        nums[i] = newArr[i];  
    } 
    free(newArr); 


}
