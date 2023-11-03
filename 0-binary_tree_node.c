#include "binary_trees.h"

/**
* binary_tree_node - create a binary tree node
* @parent: Parent node to add
* @value: Value of the node
* Return: Binary tree node
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *binary_new_node;

	binary_new_node = malloc(sizeof(*parent));

	if (!binary_new_node)
	{
		return (NULL);
	}

	binary_new_node->parent = parent;
	binary_new_node->n = value;
	binary_new_node->left = NULL;
	binary_new_node->right = NULL;

	return (binary_new_node);
}
