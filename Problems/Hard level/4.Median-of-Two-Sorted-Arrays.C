
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double newArr[nums1Size + nums2Size ];
    
    int i = 0, j = 0  ; 
    while(i < nums1Size && j < nums2Size) {
        if(nums1[i] < nums2[j] ) {
            newArr[i+j] = nums1[i]; 
            i++; 
        } 
        else{
            newArr[i+j] = nums2[j] ; 
            j++ ;  
        }
    } 
    while(i<nums1Size  ) {
        newArr[i+j]= nums1[i] ; 
        i++ ; 
    } 
    while (j< nums2Size) {
        newArr[i+j] = nums2[j];
        j++;  
    }    
    if((nums1Size + nums2Size ) % 2  == 0 ) {
        return (newArr[(nums1Size + nums2Size)/2 ]  + newArr[(nums1Size + nums2Size)/2 -1  ] ) /2 ;  
    }  
    return newArr[(nums1Size + nums2Size)/2] ; 

}

/* //I know my solution is a bullshit because it is O(m+n), 
//however LC accepted it and 
//I also lernt a new method of O(log(m+n))

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int* sortedMergedArr = (int*)malloc(sizeof(int)*((nums1Size+nums2Size)/2 +1));
    int i=0, j=0, k=0;
    while(i<nums1Size && j<nums2Size && k != (nums1Size+nums2Size)/2+1){
        if(nums1[i]<=nums2[j])
            sortedMergedArr[k++]= nums1[i++];       
        else
            sortedMergedArr[k++] = nums2[j++];
    }
    while(i<nums1Size && k != (nums1Size+nums2Size)/2+1)
        sortedMergedArr[k++] = nums1[i++];
    while(j<nums2Size && k != (nums1Size+nums2Size)/2+1)
        sortedMergedArr[k++] = nums2[j++];
    if((nums1Size+nums2Size)%2==0){
        return (double)(sortedMergedArr[k-1]+sortedMergedArr[k-2])/2;
    }
    else{
        return (double)sortedMergedArr[k-1];
    }
                 
}*/
