#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through binary tree using pre-order traversal
 * @tree: Pointer to root node of tree to traverse
 * @func: Pointer to function to call for each node
 *
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}