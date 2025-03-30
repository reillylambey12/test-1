#include "BinaryTree.h"
#include <queue>
#include <iostream>



void BinaryTree::insert(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    } else if (value < node->value) {
        insert(node->left, value);
    } else {
        insert(node->right, value);
    }
}
void BinaryTree::insert(int value) {
    insert(root, value);
}