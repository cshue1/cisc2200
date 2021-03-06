btree::btree()
{
    root = NULL;
}

btree::~btree()
{
}

void btree::destroy_tree(node *leaf)
{
    if (leaf != NULL)
    {
	destroy_tree(leaf->left);
	destroy_tree(leaf->right);
	delete leaf;
    }
}

void btree::insert(int k, node *leaf)
{
    if (k < leaf->key)
    {
	if (leaf->left != NULL)
	    insert(k, leaf->left);
	else
        {
	    leaf->left = new node;
	    leaf->left->key   = k;
	    leaf->left->left  = NULL;
	    leaf->left->right = NULL;
	}
    }
    else if (k >= leaf->key)
    {
	if (leaf->right != NULL)
	    insert(k, leaf->right);
	else
	{
	    leaf->right = new node;
	    leaf->right->key   = k;
	    leaf->right->left  = NULL;
	    leaf->right->right = NULL;
	}
    }
}

node *btree::search(int k, node *leaf)
{
    if (leaf != NULL)
    {
	if (k == leaf->key)
	    return leaf;
	if (k < leaf->key)
	    return search (k, leaf->left);
	else
	    return NULL;
    }
}

void btree::insert(int k)
{
    if (root != NULL)
	insert(k, root);
    else
    {
	root = new node;
	root -> key   = k;
	root -> left  = NULL;
	root -> right = NULL;
    }
}

node *btree::search(int k)
{
    return search(k, root);
}

void btree::destroy_tree()
{
    destroy_tree(root);
}

void btree::printPostOrder()
{
    postOrder(root);
    cout << endl;
}

void btree::postOrder(node *leaf)
{
    if (leaf != NULL)
    {
	postOrder(leaf->left);
	postOrder(leaf->right);
	cout << leaf->key << "   ";
    }
}

void btree::printPreOrder()
{
    preOrder(root);
    cout << endl;
}

void btree::preOrder(node *leaf)
{
    if (leaf != NULL)
    {
	cout << leaf->key << "   ";
	preOrder(leaf->left);
	preOrder(leaf->right);
    }
}

void btree::printInOrder()
{
    inOrder(root);
    cout << endl;
}

void btree::inOrder(node *leaf)
{
    if (leaf != NULL)
    {
	inOrder(leaf->left);
	cout << leaf->key << "   ";
	inOrder(leaf->right);
    }
}

void btree::printLevelOrder()
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
	levelOrder(root, i);
    cout << endl;
}

void btree::levelOrder(node *leaf, int level)
{
    if (leaf == NULL)
	return;
    else if (level == 1)
	cout << leaf->key << "   ";
    else if (level > 1)
    {
	levelOrder(leaf->left, level-1);
	levelOrder(leaf->right,level-1);
    }
}
int btree::height(node* leaf)
{
    int lheight, rheight;
    if (leaf == NULL)
	return 0;
    else
    {
	lheight = height(leaf->left);
	rheight = height(leaf->right);
	if (lheight > rheight)
	    return (lheight + 1);
	else
	    return (rheight + 1);
    }
}
