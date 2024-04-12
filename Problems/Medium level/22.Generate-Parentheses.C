/*void findParenthesis(int n, char*** stringResult, int* size, char s, int numOfOpenBracket, char string[]) {
    int len = strlen(string);
    if (len == n * 2) {
        (*stringResult)[*size]= (char*)malloc(n*sizeof(char)); 
        (*stringResult)[*size] = string ; 
        (*size)++;
        *stringResult = (char**)realloc(*stringResult, ((*size) + 1) * sizeof(char*));
        memset(*stringResult, 0, (*size)+1 ); 
        return;
    }
    string[numOfOpenBracket] = s;
    numOfOpenBracket++;
    if (numOfOpenBracket < n) {
        s = '(';
        findParenthesis(n, stringResult, size, s, numOfOpenBracket, string);
    }
    s = ')';
    findParenthesis(n, stringResult, size, s, numOfOpenBracket, string);
}

char** generateParenthesis(int n, int* returnSize) {
    char string[n * 2];
    char** stringResult = (char**)malloc(2* sizeof(char*));
    memset(stringResult,0,2 ) ; 
    int size = 0;

    findParenthesis(n, &stringResult, &size, '(', 0, string);
    *returnSize = size;

    return stringResult;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateParenthesisHelper(int n, char*** stringResult, int* size, char* current, int open, int close) {
    if (strlen(current) == 2 * n) {
        (*stringResult)[(*size)++] = strdup(current);
        return;
    }
    
    if (open < n) {
        char* new_current = (char*)malloc(strlen(current) + 2); // Allocate space for additional character and null terminator
        strcpy(new_current, current); // Copy current string to new buffer
        strcat(new_current, "("); // Append "("
        generateParenthesisHelper(n, stringResult, size, new_current, open + 1, close);
        free(new_current); // Free the allocated buffer
    }
    
    if (close < open) {
        char* new_current = (char*)malloc(strlen(current) + 2); // Allocate space for additional character and null terminator
        strcpy(new_current, current); // Copy current string to new buffer
        strcat(new_current, ")"); // Append ")"
        generateParenthesisHelper(n, stringResult, size, new_current, open, close + 1);
        free(new_current); // Free the allocated buffer
    }
}

char** generateParenthesis(int n, int* returnSize) {
    char** stringResult = (char**)malloc(10000 * sizeof(char*)); // Assuming maximum 10000 combinations
    int size = 0;

    generateParenthesisHelper(n, &stringResult, &size, "", 0, 0);
    *returnSize = size;

    return stringResult;
}



