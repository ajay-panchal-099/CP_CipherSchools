int sum(TreeNode* root){ 
    if(!root) return 0;
    
    return root->val + sum(root->left) + sum(root->right);
}
