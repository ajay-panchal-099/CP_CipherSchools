int res;
int leaf_to_leaf_sum( TreeNode* root){ 
    
    if(!root) return 0;
    
    int val = root->val;
    
    if(root->left == NULL and root->right == NULL)
        return val;
    
    int l = leaf_to_leaf_sum(root>left);
    int r = leaf_to_leaf_sum(root->right);
    
    int temp = max( root->val, root->val + max(l , r));
    
    int ans = max(temp, root->val + l + r);
    
    res = max( res, ans);
    
    return temp;
    
    
}