#include "binary_trees.h"

/**
  * binary_tree_insert_left - create and inserts a node as the left-child \
  of another node
  * @parent: is a pointer to the node to insert the left-child in
  * @value: is the value to store in the new node
  * Return: the newly created and inserted node
  **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t	*new;
	binary_tree_t	*old = NULL;

	if (!parent)
		return (binary_tree_node(parent, value));
	old = parent->left;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	parent->left = new;
	if (old)
	{
		new->left = old;
		old->parent = new;
	}
	return (new);
}
