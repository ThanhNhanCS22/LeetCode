/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *arrResult = calloc(sizeof(int), numsSize) ; 
    int product = 1 ; 
    int check = 0; 
    *returnSize = numsSize ; 
    for(int i = 0 ; i < numsSize ; i ++){
        if(nums[i] == 0  ) continue ;  
        check += 1  ; 
        product *= nums[i] ; 
    }
  
    if(check < numsSize  - 1 ) return arrResult   ; 
   

    for (int i = 0 ; i < numsSize; i++) { 
        if(nums[i ] != 0 && check == numsSize ) arrResult[i] = product/nums[i] ; 
        else if (nums[i] != 0 ) arrResult[i] = 0 ;  
        else arrResult[i] = product;   
    } 
    
    return arrResult ; 
}
