#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    void insert(Node*& node, int value);
    bool search(Node* node, int value);
    void deleteNode(Node*& node, int value);
    void inorder(Node* node);
    void preorder(Node* node);
    void postorder(Node* node);
    void levelorder(Node* node);
    int countNodes(Node* node);
    int height(Node* node);

public:
    BinaryTree() : root(nullptr) {}
    void insert(int value);
    bool search(int value);
    void deleteNode(int value);
    void inorder();
    void preorder();
    void postorder();
    void levelorder();
    int countNodes();
    int height();
};

#endif // BINARYTREE_H