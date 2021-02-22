void Range_element(node *root, int k1, int k2)
{
    if ( !root )
        return;

    if ( k1 < root->data )
        Range_element(root->left, k1, k2);

    if ( k1 <= root->data && k2 >= root->data )
        cout<<root->data<<" ";

    if ( k2 > root->data )
        Range_element(root->right, k1, k2);
} 