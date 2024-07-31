bool canJump(int* nums, int numsSize) {
    int idx = 0 ; 
    int maxMove = 0 ; 
    while( idx  < numsSize  ) {
        if (numsSize -1 - idx <= nums[idx]  ) return 1 ; 
        if(nums[idx]> maxMove ) maxMove = nums[idx] ;  
        if (!nums[idx] && !maxMove ) return 0 ;   
        
        idx++; 
        maxMove -- ; 
         
    }
    return 0 ; 
}
