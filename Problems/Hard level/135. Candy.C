int candy(int* ratings, int ratingsSize) {
    int candyArr[ratingsSize]; 
    for(int i = 0 ; i < ratingsSize; i ++){
        candyArr[i]= 1 ; 
    }  
    int result = ratingsSize ; 
    for(int i =1 ; i < ratingsSize ; i++ ){
        if(ratings[i]>ratings[i-1] ) {
            result+= candyArr[i-1] ; 
            candyArr[i] = candyArr[i-1] +1 ;  
        }
        
    } 
    for(int i = ratingsSize -2 ; i>= 0 ; i --){
        if(ratings[i]>ratings[i+1] && candyArr[i] <= candyArr[i+1]  ) {
            result+= candyArr[i+1] - candyArr[i] + 1 ; 
            candyArr[i] =  candyArr[i+1] + 1 ;  
        }
        
    } 
    return result ; 
    
    
}
