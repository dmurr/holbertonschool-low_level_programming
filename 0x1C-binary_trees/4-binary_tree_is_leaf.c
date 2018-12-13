#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if node is a leaf.
 * @node: Pointer to node to check
 *
 * Return: 1 if node is leaf, othewise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node || !node->right && !node->left)
		return (1);
	return (0);
}
