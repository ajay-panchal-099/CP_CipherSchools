int height(TReeNode* root){ 
    if(!root) return 0;
    int l = height(root->left);
    int r = height(root->right);
    
    return 1+ max(l,r);
}
