#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int finDecimalLen( int n){
    int a = 10 ; 
    while (n / a != 0 ){
        a = a*10 ; 
    }
    return a/10  ;
}
char* chooseClass(int n ){
    switch(n){
        case 1:
            
            return "IVX" ;
        case 10 : 
            return "XLC" ;
        case 100 : 
            return "CDM" ; 
        case 1000 : 
            return "M" ; 
        default : 
            return "" ;      

    }
}
void addString(char* array, char s, int *n  ){
    array[*n] = s; 
    *n = *n + 1  ; 
       

}
char* intToRoman(int num) {
    int seNum = num  ; 
    int check = 0 ; 
    int resultIndex = 0 ; 
    int digitsOfnum ; 
    int n = finDecimalLen( num) ;
    char* result = malloc(20 * sizeof(char)); 
    memset(result, 0, 20); 
    while(check == 0 ) { 
        if (resultIndex >= 19) { 
            break;
        }
        char * s = chooseClass(n ) ;
        digitsOfnum = seNum/ n ; 
        seNum = seNum - digitsOfnum*n ; 
        n = n / 10;
        switch(digitsOfnum) { 
            case 0 : 
                if(n == 0 ) {
                    check = 1 ; 
                    break ; 
                }
                else {
                    continue ; 
                }
            
            case 1  : 
                addString(result, s[0], &resultIndex  ); 
                break ; 
            case 2 : 
                 addString(result, s[0], &resultIndex  );
                 addString(result, s[0], &resultIndex  ); 
                 break ; 
            case 3 : 
                addString(result, s[0], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                addString(result, s[0], &resultIndex  ); 
                break ; 
            case 4 : 
                addString(result, s[0], &resultIndex  ); 
                addString(result, s[1], &resultIndex  );
                break ; 
            case 5 : 
                addString(result, s[1], &resultIndex  ); 
                break ; 
            case 6 : 
                addString(result, s[1], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                break ; 
            case 7 : 
                addString(result, s[1], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                break ; 
            case 8 : 
                addString(result, s[1], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                addString(result, s[0], &resultIndex  );
                break ; 
            case 9 : 
                addString(result, s[0], &resultIndex  );
                addString(result, s[2], &resultIndex  );
                break ; 
            default : 
                break ; 
                
                
        }
        
        if(n == 0 ){
            check = 1 ; 
        }
    }
    return result ; 
}
    
