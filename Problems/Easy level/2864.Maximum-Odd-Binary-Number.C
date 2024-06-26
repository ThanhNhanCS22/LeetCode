void merge(char arr[], int l, int m, int r) {
  

  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];


  int i, j, k;
  i = 0;
  j = 0;
  k = l;

  while (i < n1 && j < n2) {
    if (L[i] > R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(char arr[], int left, int right){
    if (left >= right) return;
    
    int mid = left + (right -left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    
    merge(arr, left, mid, right);
}
char* maximumOddBinaryNumber(char* s){
    
    int lenOfString =  strlen(s) ; 
    if (s[lenOfString - 1 ] == '0' ){
        for (int i = 0 ; i  < lenOfString  ; i++){
            if(s[i] == '1'  ) {
                s[lenOfString-1] = '1' ; 
                s[i] = '0' ;  
                
                break ; 
            }

        }
    }
    mergeSort(s,0,  lenOfString - 2 );

    
 
    return s ; 
}
