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

bool BinaryTree::search(Node* node, int value) {
    if (node == nullptr) {
        return false;
    } else if (node->value == value) {
        return true;
    } else if (value < node->value) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}

void BinaryTree::deleteNode(Node*& node, int value) {
    if (node == nullptr) return;

    if (value < node->value) {
        deleteNode(node->left, value);
    } else if (value > node->value) {
        deleteNode(node->right, value);
    } else {
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            node = temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            node = temp;
        } else {
            Node* temp = node->right;
            while (temp && temp->left != nullptr) {
                temp = temp->left;
            }
            node->value = temp->value;
            deleteNode(node->right, temp->value);
        }
    }
}

void BinaryTree::inorder(Node* node) {
    if (node != nullptr) {
        inorder(node->left);
        cout << node->value << " ";
        inorder(node->right);
    }
}

void BinaryTree::preorder(Node* node) {
    if (node != nullptr) {
        cout << node->value << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

void BinaryTree::postorder(Node* node) {
    if (node != nullptr) {
        postorder(node->left);
        postorder(node->right);
        cout << node->value << " ";
    }
}

void BinaryTree::levelorder(Node* node) {
    if (node == nullptr) return;

    std::queue<Node*> q;
    q.push(node);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->value << " ";
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
}

int BinaryTree::countNodes(Node* node) {
    if (node == nullptr) return 0;
    return 1 + countNodes(node->left) + countNodes(node->right);
}

int BinaryTree::height(Node* node) {
    if (node == nullptr) return -1; // height of empty tree is -1
    return 1 + max(height(node->left), height(node->right));
}

void BinaryTree::insert(int value) {
    insert(root, value);
}

bool BinaryTree::search(int value) {
    return search(root, value);
}

void BinaryTree::deleteNode(int value) {
    deleteNode(root, value);
}

void BinaryTree::inorder() {
    inorder(root);
    cout << endl;
}

void BinaryTree::preorder() {
    preorder(root);
    cout << endl;
}

void BinaryTree::postorder() {
    postorder(root);
    cout << endl;
}

void BinaryTree::levelorder() {
    levelorder(root);
    cout << endl;
}

int BinaryTree::countNodes() {
    return countNodes(root);
}

int BinaryTree::height() {
    return height(root);
}
