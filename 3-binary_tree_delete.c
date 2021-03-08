#include "binary_trees.h"

/**
  * preorder_del - traverse and delete the tree using preorder
  * @tree: the tree to traverse
  **/
void preorder_del(binary_tree_t *tree)
{
	if (!tree)
	{
		free(tree);
		return;
	}
	preorder_del(tree->left);
	preorder_del(tree->right);
	free(tree);
}

/**
  * binary_tree_delete - deletes an entire binary tree
  * @tree: is a pointer to the root node of the tree to delete
  **/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
		preorder_del(tree);
}

