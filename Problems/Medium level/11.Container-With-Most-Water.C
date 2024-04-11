int maxArea(int* height, int heightSize) {
    int max = 0  ; 
    int i =  0 ;
    int j = heightSize - 1 ; 
    int area ; 
    while (i <= j ) { 
        if(height[i] <= height[j]) {
            area = height[i]*(j-i) ; 
            i++ ; 
        }
        else { 
            area = height[j]*(j-i) ; 
            j-- ; 
        }
        if(max <area ) max = area ;  


    } 
    return max; 
}
