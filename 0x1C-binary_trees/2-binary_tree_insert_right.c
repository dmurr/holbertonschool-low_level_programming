#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts node as right child
 * @parent: pointer to parent
 * @value: value of newnode
 *
 * Return: pointer to newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
	}
	parent->right = newnode;

	return (newnode);
}
