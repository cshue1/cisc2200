/* CHRISTINE SHUE
   DUE: 28 APRIL 2017
   PURPOSE: This assignment was to create a Level-Order Traversal
   Algorithm for the class btree.
*/
#ifndef BTREE_H
#define BTREE_H

struct node
{
    int key;
    node *left;
    node *right;
};

class btree
{
public:
    btree();
    ~btree();

    void insert(int);
    node *search(int);
    void destroy_tree();
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    void printLevelOrder();
    
private:
    void destroy_tree(node *);
    void insert(int, node *);
    node *search (int, node *);
    void inOrder (node *);
    void preOrder(node *);
    void postOrder(node *);
    void levelOrder(node *,int);
    int height (node *);
    node *root;
};

#endif
