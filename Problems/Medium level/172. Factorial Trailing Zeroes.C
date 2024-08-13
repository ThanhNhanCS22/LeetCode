int trailingZeroes(int n) {
    int temp ; 
    int count2 = 0 ;
    int count5 = 0 ;  
    for(int i = 1 ; i < n + 1  ; i++ ){
            temp = i ;
            while(!(temp%5) ) {
                temp/= 5 ; 
                count5 ++ ; 
            }  
    } 
    return count5; 
}

// O(logn) solution  : 

// int trailingZeroes(int n) {
//     int count = 0;
//     while (n > 0) {
//         n /= 5;
//         count += n;
//     }
//     return count;
// }
