bool isUgly(int n) {
    if(n <= 0 ) return 0;  
    if( n == 1 ) return 1 ; 
    else if(!(n%2)) return isUgly(n/2) ; 
    else if(!(n%3)) return isUgly(n/3)  ; 
    else if(!(n%5)) return isUgly(n/5) ; 
    else return 0 ;   
}
