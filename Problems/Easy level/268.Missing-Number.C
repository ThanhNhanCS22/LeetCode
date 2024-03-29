int missingNumber(int* nums, int numsSize) {

    int result ; 
    int arr[numsSize + 1 ] ; 
     
    for (int i = 0 ; i <= numsSize ; i++ ) { 
        arr[i] =  -1  ;  
    }  
    for (int i = 0; i < numsSize ; i ++) { 
        arr[nums[i]] = nums[i] ;  
    }
    for(int i = 0 ; i <= numsSize; i ++ ){
        if(arr[i] == - 1 )  result = i ; 

    }
    return result ; 
}
