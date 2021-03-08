#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* External libraries */
#include <stdlib.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};


/* Different binary tree type */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Mandatory task's prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);


void binary_tree_delete(binary_tree_t *tree);


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));


size_t binary_tree_height(const binary_tree_t *tree);


size_t binary_tree_leaves(const binary_tree_t *tree);


int binary_tree_is_full(const binary_tree_t *tree);

/* Advanced task's prototypes */

#endif