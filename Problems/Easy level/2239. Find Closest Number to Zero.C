int findClosestNumber(int* nums, int numsSize) {
    int result = nums[0];  
    for (int i = 1  ; i < numsSize ; i++) {
        if(abs(result) > abs(nums[i])) result = nums[i] ; 
        else if(abs(result) == abs(nums[i]) && result< nums[i]) result = nums[i];  
    }
    return result ; 
}
