int removeElement(int* nums, int numsSize, int val) {
    
    int valPos = 0 ; 
    int count = 0 ; 
    for(int i = 0 ; i < numsSize; i ++) {
        if(nums[i] == val) {
            count ++; 
            continue; 
        }
        
        nums[valPos] = nums[i]; 
        valPos++; 
    }
      

    int result = numsSize - count ; 
   
    return result ;  
    
}
