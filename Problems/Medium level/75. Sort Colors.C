void sortColors(int* nums, int numsSize) {  
    int red  = 0 , blue = 0 , white = 0 ; 
    for (int i = 0 ; i < numsSize ; i ++) {
        if (nums[i] == 0 ) red ++; 
        else if(nums[i] == 1 ) white ++ ; 
        else blue ++ ; 

    } 
    int index = 0 ; 
    while( red >0 ) {
        nums[index++] =0  ;
        red -- ;   
    } 
    while( white >0 ) {
        nums[index++] =1  ;
        white -- ;   
    } 
    while( blue >0 ) {
        nums[index++] = 2  ;
        blue -- ;   
    } 
    

}
