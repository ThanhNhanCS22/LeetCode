int* twoSum(int* nums, int numsSize, int target,  int* returnSize ){
    

    int* out = (int*)malloc(2*sizeof(int)); 
    
    for (int i = 0 ; i < numsSize -1  ; i++) {
        for (int j = i + 1; j < numsSize ; j ++){
            if (target - nums[i] == nums[j]){
                out[0] = i ; 
                out[1] = j ;
                *returnSize = 2 ; 
                return out ; 

            } 
        }
         
    }
    
    *returnSize = 2 ; 
    out[0] = -1 ;
    out[1] = -1 ;  
    return out ;  


}










