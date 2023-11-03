#include "binary_trees.h"

/**
* binary_tree_insert_left - insert the left node in a binary tree
* @parent: Parent node to add
* @value: Value of the node
* Return: Binary tree with left node inserted
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *binary_new_node;

	if (!parent)
	{
		return (NULL);
	}

	binary_new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		binary_new_node->left = parent->left;
		binary_new_node->left->parent = binary_new_node;
	}
	parent->left = binary_new_node;

	return (binary_new_node);
}
