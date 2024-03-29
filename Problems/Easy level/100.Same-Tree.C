/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void checkSameTree(struct TreeNode* p , struct TreeNode* q, bool *check ){
    if(*check == 0 ) return;  
    if(p == NULL && q == NULL) return;  
    if(p == NULL || q == NULL ) {
        *check = 0 ; 
        return ;
    }
    checkSameTree(p->left , q->left, check )   ; 
    if(p-> val != q -> val ) {
        *check = 0 ; 
        return ;  
        
    } 
    checkSameTree(p->right, q->right, check ) ; 
    
} 
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    bool check = 1 ; 
    checkSameTree( p , q, &check ) ; 
    return check ;  
}
