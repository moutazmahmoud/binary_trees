#ifndef BINARY_TREES_H  // Check if BINARY_TREES_H is not defined
#define BINARY_TREES_H  // Define BINARY_TREES_H to prevent double inclusion

#include <stdlib.h>  // Include standard library for memory functions

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;  // Value of the node
    struct binary_tree_s *parent;  // Pointer to the parent node
    struct binary_tree_s *left;  // Pointer to the left child node
    struct binary_tree_s *right;  // Pointer to the right child node
};

typedef struct binary_tree_s binary_tree_t;  // Typedef for basic binary tree

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;  // Typedef for binary search tree

/* AVL Tree */
typedef struct binary_tree_s avl_t;  // Typedef for AVL tree

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;  // Typedef for max binary heap

/* Function Prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);  // Function prototype for creating a new node

#endif /* BINARY_TREES_H */  // End of include guard
