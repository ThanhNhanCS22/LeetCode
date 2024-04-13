bool isIsomorphic(char* s, char* t) {
    int *arr1 = calloc(256, sizeof(int)) ;
    int  *arr2 = calloc(256,sizeof(int)) ; 
    int  *arr3 = calloc(256,sizeof(int)) ; 
    for(int i = 0 ; i < strlen(s); i ++  ) { 
        if(arr1[(int)s[i]] != arr2[(int)t[i]])  {
            return 0 ; 
        }
        if(arr3[(int)s[i]]== 0 )  {
            arr3[(int)s[i]] = (int)t[i] ; 

        }
        else{
            if(arr3[(int)s[i]] != (int)t[i] ) return 0 ; 
        }
        arr1[(int)s[i]] ++; 
        arr2[(int)t[i]] ++; 
    } 
    return 1 ; 
}

//the method that beat 100% of users with time complexity of C 


/*
bool isIsomorphic(char* s, char* t) {
    int hashS[128];
    int hashT[128];
    for (int i = 0; i < 128; i++) {
        hashS[i] = -1;
        hashT[i] = -1;
    }

    int index = 0;
    while (s[index] != '\0') {
        if (hashS[s[index]] == -1 && hashT[t[index]] == -1) {
            hashS[s[index]] = t[index];
            hashT[t[index]] = s[index];
        } else if (hashS[s[index]] != t[index] || hashT[t[index]] != s[index]) {
            return false;
        }
        index++;
    }
    return true;
}*/
