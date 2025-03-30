#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree tree;
    // Insert values
    tree.insert(100);
    tree.insert(324);
    tree.insert(710);
    tree.insert(25);
    tree.insert(680);
    tree.insert(50);
    tree.insert(820);
// Inorder traversal
    std::cout << "Inorder traversal: ";
    tree.inorder(); // Output: 20 30 40 50 60 70 80
    // Search for values
    std::cout << "Searching for 25: " << (tree.search(25) ? "Found" : "Not Found") << std::endl; // Output: Found
    std::cout << "Searching for 900: " << (tree.search(900) ? "Found" : "Not Found") << std::endl; // Output: Not Found
    // Delete a value
    tree.deleteNode(100);
    std::cout << "Inorder traversal after deleting 100: ";
    tree.inorder(); 
    return 0;
}