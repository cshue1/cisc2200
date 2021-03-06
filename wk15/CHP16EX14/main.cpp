#include <iostream>
using namespace std;

#include "btree.h"
#include "btree.cpp"

int main()
{
    btree tree;

    tree.insert(30);
    tree.insert(10);
    tree.insert(20);
    tree.insert(40);
    tree.insert(50);

    cout << "In Order Print: " << endl;
    tree.printInOrder();

    cout << "Pre Order Print: " << endl;
    tree.printPreOrder();

    cout << "Post Order Print: " << endl;
    tree.printPostOrder();

    cout << "Level Order Print: " << endl;
    tree.printLevelOrder();
    return 0;
}
