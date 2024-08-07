int trap(int* height, int heightSize) {
    int i = 0 , j = 1 ; 
    int result = 0; 
    int waterVol  = 0 ; 

    while (j < heightSize) {
        if(height[j] >= height[i]  ){
            i  = j  ; 
            result+= waterVol ; 
            waterVol = 0 ; 
        } 
        else {
            waterVol+= height[i] - height[j] ; 

        }
        j ++ ; 
    } 

    waterVol = 0 ; 
    int des = i ;
    j = heightSize -1 ; 
    i = j -1 ; 

    
    while(i >= des){
        if(height[i] >= height[j]  ){
            j =i   ; 
            result+= waterVol ; 
            waterVol = 0 ; 
        } 
        else {
            waterVol+= height[j] - height[i] ; 

        }
        i -- ;
    } 
    return result ; 
}
