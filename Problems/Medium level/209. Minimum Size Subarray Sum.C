int minSubArrayLen(int target, int* nums, int numsSize) {
    int i = 0 , j = -1  ; 
    int sum = 0  ; 
    int len ; 
    int result = INT_MAX ; 
    while(1) {
        
        if (sum >= target )  { 
 
            len = j  - i + 1 ; 
            if(result > len) result = len ; 
            sum -= nums[i++];  
             
        }
        else   {
            j++; 
            if(j == numsSize ) break ;  
            else sum+= nums[j];  
        }     
    }  
    return result == INT_MAX ? 0 : result ; 
}
