#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal: ";
    tree.inorder(); // Output: 20 30 40 50 60 70 80

    std::cout << "Searching for 40: " << (tree.search(40) ? "Found" : "Not Found") << std::endl; // Output: Found
    std::cout << "Searching for 90: " << (tree.search(90) ? "Found" : "Not Found") << std::endl; // Output: Not Found

    tree.deleteNode(30);
    std::cout << "Inorder traversal after deleting 30: ";
    tree.inorder(); 
    return 0;
}