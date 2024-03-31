void findDiaEachBrand(struct TreeNode* root, int *max,  int count ) { 
   if(root == NULL ) return   ;
   count ++ ;
   if (*max < count ) *max = count ;  
   
   findDiaEachBrand(root-> left, max , count   );
   findDiaEachBrand(root-> right, max , count  ) ;
} 

int DiameterOfSubBinaryTree(struct TreeNode* root){
    int count = 0 ; 
    int max_1 = 0 ; 
    int max_2 = 0 ; 
    findDiaEachBrand(root -> left, &max_1, count )  ;
    findDiaEachBrand(root -> right, &max_2, count ) ; 
    
    int result = max_1 + max_2 ; 
    return result   ; 
}
void findMaxDiameterOfSubBinaryTree(struct TreeNode* root, int *max ){
    
    if(root == NULL) return ; 
    int diameter = DiameterOfSubBinaryTree(root) ; 
    if (*max < diameter ) *max = diameter; 
    findMaxDiameterOfSubBinaryTree(root->left , max );
    findMaxDiameterOfSubBinaryTree(root->right , max );


}
int diameterOfBinaryTree(struct TreeNode* root) {
    int max = 0 ; 
    findMaxDiameterOfSubBinaryTree(root, &max ); 

    
     
    return max   ; 

    
}
