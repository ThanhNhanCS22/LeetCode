int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 1) {
    
        return 1 ;   
    }
    int endPos = 0 ; 
    int count = 0 ; 
    for(int i = 1 ; i < numsSize; i ++) {
        if(nums[i] == nums[endPos] ) {
            count ++; 
            continue; 
        }
        endPos++; 
        nums[endPos] = nums[i]; 
    }
    int result = numsSize - count ;     


   
    return  result;  
}
