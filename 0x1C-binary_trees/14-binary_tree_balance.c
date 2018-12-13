#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree:  Pointer to the root node of the tree to
 * measure the balance factor of
 *
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;
	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	return (height_left - height_right);

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
