#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert left child
 * @parent: pointer to parent
 * @value: value of newly inserted node
 *
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}
	parent->left = newnode;
	return (newnode);

}
