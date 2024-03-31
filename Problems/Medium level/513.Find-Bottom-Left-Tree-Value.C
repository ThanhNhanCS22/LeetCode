/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void BottomLeftValue(struct TreeNode* root, int *max, int count, int *getResult , int check, int temp ) {
    if (root == NULL ) return ; 
    count ++ ; 
    if(*max < count ) {
        *max = count;
          
        *getResult  = root -> val ; 
    }

    if (check == 1  ) {
        *getResult = temp ;  

    }
    check = 0; 


    BottomLeftValue( root -> left ,  max,  count, getResult, check, temp    ) ;

    if(root-> left != NULL ) {
        check = 1 ;
        temp = *getResult ; 
    }

    BottomLeftValue( root -> right ,  max,  count , getResult, check, temp   ) ; 


}
int findBottomLeftValue(struct TreeNode* root) {

    int max = 0 ; 
    int count = 0 ; 
    int getResult = root->val ; 
    int check = 0 ;
    int temp = 0 ; 
    BottomLeftValue(root, &max,  count, &getResult , check, temp )  ;
    return getResult ; 
}
