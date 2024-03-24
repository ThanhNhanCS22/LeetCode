int intValueOfRoman(char s ) {
    switch(s){
        case 'I' :
            return 1 ; 
        case 'V' :
            return 5 ; 
        case 'X' :
            return 10 ; 
        case 'L' :
            return 50 ; 
        case 'C' :
            return 100;
        case 'D' :
            return 500; 
        case 'M' :
            return 1000; 
        default :
            return -1 ; 
    }
}

int romanToInt(char* s) {
    
    int result = 0 ; 
    int len = strlen(s) ; 
    for (int i = 0 ; i < len ; i++) {
        int val1 = intValueOfRoman(s[i] ) ;
        if (i  == len -1 ){
            result = result + val1 ; 
        }    
        else{
            int val2 = intValueOfRoman(s[i+1] ) ; 
            if(val1 < val2 ) {
                result = result - val1 ; 
            }
            else {
                result = result + val1 ; 
            }
        }
            
    }
    return result ; 
}
