#ifndef BTREE_H
#define BTREE_H

struct node
{
    int key_value;
    node *left;
    node *right;
};

class btree
{
public:
    btree();
    ~btree();
    bool insert(int key);
    
private:
    node *root;
    int height;
    int numOfNodes;
};

#endif
