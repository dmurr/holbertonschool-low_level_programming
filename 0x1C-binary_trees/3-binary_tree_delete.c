#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to root of tree.
 *
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node = NULL;

	if (!tree)
		return;

	node = tree;
	binary_tree_delete(node->left);
	binary_tree_delete(node->right);

	free(node);

}
