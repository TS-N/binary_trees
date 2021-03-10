#include "binary_trees.h"

/**
 * inorder - goes through a binary tree using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @prev: the previous data in the traversal
 * @flick: bool value for if tree is a BST
 *
 * Return: void
 **/

void	inorder(const binary_tree_t *tree, int *prev, int *flick)
{
	if (!tree || !*flick)
	{
		return;
	}
	inorder(tree->left, prev, flick);
	if (tree->n < *prev)
		*flick = 0;
	*prev = tree->n;
	inorder(tree->right, prev, flick);
}

/**
  * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
  * @tree: is a pointer to the root node of the tree to check
  * Return: 1 if tree is a valid BST, and 0 otherwise
  **/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int	a = 1;
	int	prev = INT_MIN;

	if (!tree)
		return (0);
	inorder(tree, &prev, &a);
	return (a);
}
