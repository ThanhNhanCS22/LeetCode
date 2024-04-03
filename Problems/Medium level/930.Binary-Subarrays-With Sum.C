int numSubarraysWithSum(int* nums, int numsSize, int goal){
    int tail = 0 ; 
    int head =0 ; 
    int sum = 0 ; 
    int result = 0 ; 
    int head0s = 0 ; 
    int sub0s = 0 ; 
    if (goal == 0 ){
        for (int i = 0 ; i < numsSize ; i++){
            if(nums[i] == 0  ) {
                result += 1 + head0s; 
                head0s ++ ; 
            } 
            else head0s= 0 ; 
        }
        return result ; 
    } 
    while (sum < goal && tail < numsSize)   {
        sum+= nums[tail] ; 
        tail ++ ;
    }  
    if (tail == numsSize  && goal != sum ) return 0 ;     
    
    while (tail < numsSize ){
        
        if (nums[tail] == 0  ) sub0s += 1 ; 
        else  {
            while(nums[head] == 0 ){
                head0s ++ ; 
                head ++; 
            } 
            result += ((sub0s+1)*(head0s+1)); 
            head ++ ; 
            sub0s = 0 ; 
            head0s = 0;        
        }
        tail ++; 

    }   
    while(nums[head] ==0 ) { 
        head0s ++ ; 
        head++ ; 
    } 
    result += ((sub0s+1)*(head0s+1)); 

    return result; 
}
