/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void flatting(struct TreeNode** linkedList){
    if(!(*linkedList)-> left && !(*linkedList)->right ) return ;  
    struct TreeNode* temp = (*linkedList) -> right ; 
    (*linkedList)->right = (*linkedList)->left ; 
    (*linkedList)->left  = NULL; 

    if(!(*linkedList)->right){
        (*linkedList)->right = temp ;  
        *linkedList = temp  ;
        flatting(linkedList) ; 
        return ;         
    } 

    
    *linkedList = (*linkedList)->right ;
    flatting(linkedList) ;  
    if(!temp ) return ;  
    
    (*linkedList)->right = temp ; 
    (*linkedList) = temp ; 
    flatting(linkedList) ; 
    return ; 

} 
void flatten(struct TreeNode* root) {    
    if(!root) return ;  
    flatting(&root) ;
 
}
/*
void flatten(struct TreeNode* root)
{
        if(root)
        {
            struct TreeNode* flat_tree = root->right;
            
            flatten(root->left);
            flatten(root->right);
            
            root->right = root->left;
            root->left = NULL;
            while(root->right)
            {
                root = root->right;
            }
            
            root->right = flat_tree;
        }
   
}
*/
