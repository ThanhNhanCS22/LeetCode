int jump(int* nums, int numsSize) {
    if (numsSize == 1 ) return 0 ;  
   
    int move = 0    ; 
    int jumps = 1  ; 
    int maxMovePos  =  0   ; 
    int idx =0 ; 
    for( ; idx < numsSize -1 ; idx ++  )  {
        if (numsSize -1 - idx <= nums[idx]  ) break ; 
        if (!move)  {
            jumps ++; 
            move =  nums[maxMovePos] - (idx - maxMovePos)  ;
            maxMovePos = !idx ?  idx +1 : idx ; 
            
        } 
        else {
            if(nums[maxMovePos] +  maxMovePos  < nums[idx] +  idx  ) maxMovePos  = idx ;
            move -- ;        
        } 
    }
    if (!move && idx  ) jumps++ ; 
    return jumps  ;
}
