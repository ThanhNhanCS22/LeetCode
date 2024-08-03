void merge(int* nums1, int nums1Size, int n, int* nums2, int nums2Size, int m) {
    
    int i = 0 ; 
    int j = 0 ; 
    int nums[n+m] ;  
    while(i< n &&  j< m ){
        if(nums1[i] < nums2[j]) nums[(i++)+j] = nums1[i];
        else {
            nums[i+(j++)] = nums2[j]  ;
            
        }
    } 
    while(i<n) nums[(i++)+j] = nums1[i];  
    while(j<m ) nums[i+(j++)] = nums2[j] ; 

    for(int i = 0 ; i < n+m ; i ++) {
        nums1[i] = nums[i]; 
    }   
    
    
}
