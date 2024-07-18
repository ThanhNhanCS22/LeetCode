int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int result = 0 ; 
    int i = 0, j = 1, k = 2 ; 
    while(k< numsSize ) { 
        if(nums[i] + diff == nums[j]  && nums[j] + diff == nums[k]) {
            result++;   
            i++ ; 
            j++ ; 
            k ++; 
        } 
        else if( nums[j] < nums[i] + diff ) {
            j++ ; 
            if(j == k ) k++; 
            
        } 
        else if(nums[j] == nums[i] + diff && nums[k] < nums[j] + diff   ) {
            k ++ ;  
        }
        else { 
            i++; 
            if(i == j ) j ++ ;
            if(j == k ) k++;    
        }
         
    } 
    return result ; 
}
