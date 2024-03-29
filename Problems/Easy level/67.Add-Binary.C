char* addBinary(char* a, char* b) {
    int ptrA = strlen(a) - 1;
    int ptrB = strlen(b) - 1;
    char carry = '0';
    int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    char* result = (char*)malloc((len + 2) * sizeof(char));
    result[len + 1] = '\0'; 

    int ptr = len;
    
    while (ptrA >= 0 || ptrB >= 0 || carry == '1') {
        char digitA = (ptrA >= 0) ? a[ptrA] :'0';
        char digitB = (ptrB >= 0) ? b[ptrB] : '0';

        if (digitA == '1' && digitB == '1') {
            result[ptr] = carry;
            carry = '1';
        } else if (digitA == '0' && digitB=='0') {
            result[ptr] = carry;
            carry = '0';
        } else {
            result[ptr] = (carry == '1') ?'0' : '1';
        }

        ptrA--;
        ptrB--;
        ptr--;

        
    }

    if(ptr == 0 ){
        result++; 
    }

    return result;
}
