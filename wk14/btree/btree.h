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

    void insert(int);
    node search(int);
    void destroy_tree();
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    
private:
    void destroy_tree(node *);
    void insert(int, node *);
    node search(int, node *);
    void inOrder(node *);
    void preOrder(node *);
    void postOrder(node *);

    node *root;
};

#endif
