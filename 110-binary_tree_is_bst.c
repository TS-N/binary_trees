#include "binary_trees.h"

int traverse(const binary_tree_t *tree, int dir)
{
	int	tmp;

	if (!tree)
	{
		return (1);
	}
	if (tree->parent)
	{
		tmp = tree->parent->n - tree->n;
		if (tmp < 0 && dir == 1)
}

tmp > 0 
		return (!dir);
else
	rif dir = 1
		return (0)
	if dir == 0
		return (1)


int binary_tree_is_bst(const binary_tree_t *tree)
{

}
