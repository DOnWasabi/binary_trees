#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a new node for binary tree
 * @parent: a pointer to the parent of the created node
 * @value: a value to put into node
 * Return: NULL if fail, new node on success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
