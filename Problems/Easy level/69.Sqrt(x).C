unsigned long long mySqrt(int x) {
    unsigned long long bot = 0 ; 
    unsigned long long top = x ; 
    unsigned long long mid ;  
    while (top - bot >1  ) {
        mid = (bot+top)/2 ; 
        if(mid*mid == x ) {
            top = mid ; 
            break ;
        } 
        else if (mid*mid > x ) top = mid ; 
        else bot = mid ; 
    }
    if (top*top<= x ) return top ; 

    else  return bot ; 
}
