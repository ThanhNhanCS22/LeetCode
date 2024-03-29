void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    if(n == 0 ) return  ;
    if(m == 0 )  {
        for(int i = 0 ; i < n ; i++ ){
            nums1[i] = nums2[i] ; 
        }
        return; 

    }
    int* nums3 = malloc((m+n)*sizeof(int) ) ; 

    int ptr1 = 0; 
    int ptr2 = 0 ;  
    
    for(int i = 0 ; ptr1<m || ptr2 < n ; i++){
        if(ptr1== m ){
            nums3[i] = nums2[ptr2] ; 
            ptr2 ++; 
        }
        else if(ptr2== n ){
            nums3[i] = nums1[ptr1] ; 
            ptr1 ++; 
        }
        else if(nums1[ptr1]< nums2[ptr2]){
            nums3[i] = nums1[ptr1] ; 
            ptr1++; 
        }
        else{
            nums3[i] = nums2[ptr2] ; 
            ptr2 ++; 
        }
    }
    for(int i = 0 ; i < nums1Size ; i ++){ 
        nums1[i] = nums3[i]; 

    } 
}
