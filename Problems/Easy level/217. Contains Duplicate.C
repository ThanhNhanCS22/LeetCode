int compare(int * a, int* b) {
    return (*a - *b); 
}
bool containsDuplicate(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(int), compare);
    
    for(int i = 1  ; i < numsSize ; i ++) { 
        if(nums[i -1 ] == nums[i])  return 1 ;
    }  
    return 0 ; 
}
