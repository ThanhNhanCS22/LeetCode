struct stack{
    int size ;
    int top; 
    char *arr ; 
};

bool isEmpty(struct stack* ptr ){
    if (ptr->top == -1 ) {
        return 1; 
    }
    return 0; 
    
} 
bool isFull(struct stack* ptr ){
    if (ptr-> top == ptr->size -1 ) {
        return 1; 
    }
    return 0; 
    
} 
void push(struct stack * ptr, char val) {
    if(isFull(ptr)){
        printf("Stack is Overflow!!!\n") ; 
    }
    else  ptr->arr[++(ptr->top)] = val ;
    
}
char pop (struct stack* ptr){
    
    if (isEmpty(ptr) ) {
        printf("Stack is Underflow!!!\n") ; 
        return -1 ; 
        
    }
    else { 
        return ptr->arr[ptr->top--];  
    }
}
char peek(struct stack* ptr){
    if (ptr->top == -1 ){ 
    
        printf("Stack is underflow!!!\n") ; 
        return -1 ; 
    }
    else return ptr->arr[ptr->top]; 
} 
bool isValid(char *s) {
    int len = strlen(s)  ; 
    struct stack *parentheseStack = malloc(sizeof(struct stack)) ;
    parentheseStack->size = len ;
    parentheseStack->top = -1;
    parentheseStack->arr = malloc((len) *sizeof(char)) ;
    for(int i = 0 ;  i < len  ; i++) {

        if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
            push(parentheseStack,s[i]);  
        }
        else{
            if(parentheseStack->top == -1 ) return 0  ;
            else if(s[i] == '}' && pop(parentheseStack) != '{'  )  return 0; 
            else if(s[i] == ']' && pop(parentheseStack) != '['   )  return 0; 
            else if(s[i] == ')' && pop(parentheseStack) != '('  )  return 0; 
        }  
    } 
    return parentheseStack->top == -1? 1 : 0  ; 
}
