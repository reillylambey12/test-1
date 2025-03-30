#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree tree;
    // Insert values
    tree.insert(1000);
    tree.insert(354);
    tree.insert(70);
    tree.insert(25);
    tree.insert(600);
    tree.insert(50);
    tree.insert(820);
// Inorder traversal
    std::cout << "Inorder traversal: ";
    tree.inorder(); // Output: 20 30 40 50 60 70 80
    // Search for values
    std::cout << "Searching for 820: " << (tree.search(820) ? "Found" : "Not Found") << std::endl; // Output: Found
    std::cout << "Searching for 900: " << (tree.search(900) ? "Found" : "Not Found") << std::endl; // Output: Not Found
    // Delete a value
    tree.deleteNode(354);
    std::cout << "Inorder traversal after deleting 354: ";
    tree.inorder(); 
    return 0;
}