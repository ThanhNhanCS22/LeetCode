/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void checkSymetric(struct TreeNode* root1,struct TreeNode* root2 ,bool *check) {
    if(*check == 0 ) return ; 
    if(root1 == NULL && root2 == NULL ) return ; 
    if(root1 == 0 || root2 == NULL ){ 
        *check = 0 ; 
        return ; 
    
    }  
    checkSymetric(root1->left ,root2-> right ,check) ; 
    if(root1 -> val != root2 -> val ){
        *check = 0 ; 
        return ; 
    } 
    checkSymetric(root1->right ,root2-> left,check) ;

} 
bool isSymmetric(struct TreeNode* root) {
    bool check = 1; 
    checkSymetric(root,root,&check)    ; 
    return check ; 
}
