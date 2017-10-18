#include "btree.h"

btree::btree()
{
    root       = NULL;
    height     = 0;
    numOfNodes = 0;
}

btree::~btree()
{
}

bool btree::insert(int key)
{
    node *temp,*leaf;
    temp = new node;
    if (temp == NULL)
	return false;
    temp -> key_value = key;
    temp -> left      = NULL;
    temp -> right     = NULL;
    if (root == NULL)
    {
	root = temp;
	numOfNodes ++;
	height = 1; 
	return true;
    }
    else
    {
	leaf = root;
	
	if (key < leaf -> key_value)
	{
	    leaf -> left = temp;
	}
    }
}
