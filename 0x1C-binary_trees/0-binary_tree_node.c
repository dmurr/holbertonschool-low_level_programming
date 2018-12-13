#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates new node and points parent to it
 * @parent: parent of new node
 * @value: value of new node
 *
 * Return: Pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode)
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	return (newNode);
}
