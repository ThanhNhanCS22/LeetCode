
long long int  reverse(long long int  x){
    long long int result = 0 ; 
    long long int  temp = x ; 
    int  len = snprintf("NULL" , 0, "%lld", x) ; 
    /*if ( (x >= 0 && len == 1 ) || (x <0 && len ==2 ))  {
        return x ; 
    }*/
 
    if (x > 0 ) { 
        for(int  i = 0 ; i < len ; i ++ ){
            result = (result + temp%10)*10 ; 
            temp = temp/10 ; 
        }
        result = result/10; 
    }
    else {
        temp = temp * (-1 ); 
        for(int i = 0 ; i < len - 1  ; i ++) {
            result = (result + temp%10) * 10  ; 
            temp = temp/10 ; 
        }
        result = (result * (-1))/10 ; 
    }
    if (result < INT_MIN || result > INT_MAX) {
        return 0;
    }
    return result ; 

    
    
}
