
int removeDuplicates(int* nums, int numsSize) {
    
    int count = 1 ;
    int result = 1 ; 
    for(int i = 1 ; i< numsSize ; i++) {
        
        if(nums[i] != nums[i-1])  count = 1 ;

        else count++;

        if(count <=2) {
            
            nums[result ] = nums[i] ; 
            result++;
        }  
    }   
    
    return result ; 
}
