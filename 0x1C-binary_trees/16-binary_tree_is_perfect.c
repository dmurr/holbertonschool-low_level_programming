#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if True, 0 if False
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node.
 *
 * Return: Height or 0 if tree is Null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}
