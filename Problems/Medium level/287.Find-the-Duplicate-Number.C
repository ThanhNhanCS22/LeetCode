int findDuplicate(int* nums, int numsSize) {
    int *arrTemp = calloc(numsSize , sizeof(int ) ) ; 
    for( int i = 0 ; i < numsSize; i ++  )   { 
        if(arrTemp[nums[i]] != 0   ) {
            free(arrTemp) ; 
            return nums[i] ; 
        }
        arrTemp[nums[i]]++; 
    }
    free(arrTemp) ; 
    return 0  ; 
}
