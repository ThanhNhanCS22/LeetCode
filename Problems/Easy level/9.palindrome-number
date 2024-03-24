long long finDecimalLen(long long n){
    long long a = 10 ; 
    while (n / a != 0 ){
        a = a*10 ; 

    }
    return a/10  ;
}    

long long reverse(long long n){
    long long numberClass = finDecimalLen(n) ; 
    long long quotient = n ; 
    long long reminder ; 
    long long result = 0 ; 
    while(quotient>0){
          
        reminder = quotient%10; 
        quotient = quotient/10;
        result = result + reminder*numberClass ; 
        numberClass = numberClass/10; 
        
    }
    return result ; 


}
bool isPalindrome( long long  x) {
    if (x < 0 ){
        return 0 ; 
    }
    else if (x>= 0 && x< 10 ) return 1 ; 
    else if (x == reverse(x)) return 1 ; 
    return 0 ; 
    
}
