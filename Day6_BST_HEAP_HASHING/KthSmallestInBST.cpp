Node* kthSmallest(Node* root, int& k)
{
    if (root == NULL)
        return NULL;

    Node* left = kthSmallest(root->left, k);
    if (left != NULL)
        return left;

    k--;
    if (k == 0)
        return root;
    
    return kthSmallest(root->right, k);
}