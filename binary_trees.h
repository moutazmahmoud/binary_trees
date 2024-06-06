#ifndef BINARY_TREES#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function Prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */_H
#define BINARY_TREES_H

#include <stdlib.h>

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function Prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
