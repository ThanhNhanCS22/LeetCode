/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void findMove(int *move, struct TreeNode*root ) {
    if(!root) return  ; 
    findMove ( move,root->left); 
    findMove( move , root -> right); 
    int right = !root->right ?  0 : root->right->val ; 
    int left =  !root->left ? 0 : root->left->val ;  
    *move = *move + abs(right)  + abs(left) ; 
    int val  = root->val - 1 + left + right  ;
    root->val = val  ; 
} 
int distributeCoins(struct TreeNode* root) { 
    int move = 0 ; 
    findMove(&move, root); 
    // if(!root) return 0 ; 
    // distributeCoins( root->left); 
    // distributeCoins( root -> right); 
    // int right = !root->right ?  0 : root->right->val ; 
    // int left =  !root->left ? 0 : root->left->val ;  
    // move = move + abs(right)  + abs(left) ; 
    // int val  = root->val - 1 + left + right  ;
    // root->val = val  ; 
    return move  ; 

}
