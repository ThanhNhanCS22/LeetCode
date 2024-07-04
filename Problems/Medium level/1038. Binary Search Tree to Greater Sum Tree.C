/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void updateKeyInOrderRightTraversal(struct TreeNode* root, int* sumOfTheRight ) {
    if(!root) return ; 
    updateKeyInOrderRightTraversal( root->right,  sumOfTheRight ) ; 
    *sumOfTheRight += root->val; 
    root->val = *sumOfTheRight  ; 
    updateKeyInOrderRightTraversal( root->left,  sumOfTheRight ) ;
} 


struct TreeNode* bstToGst(struct TreeNode* root) {
    int sumOfTheRight = 0 ; 
    updateKeyInOrderRightTraversal( root, &sumOfTheRight )  ;
    return root ;
}
