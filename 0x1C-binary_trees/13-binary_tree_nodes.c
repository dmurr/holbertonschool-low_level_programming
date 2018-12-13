#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: Number of nodes with at least 1 child, NULL if node has no children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);

	n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (n + 1);

	return (n);

}
