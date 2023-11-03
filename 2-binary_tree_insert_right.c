#include "binary_trees.h"

/**
* binary_tree_insert_right - insert the right node in a binary tree
* @parent: Parent node to add
* @value: Value of the node
* Return: Binary tree with right node inserted
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *binary_new_node;

	if (!parent)
	{
		return (NULL);
	}

	binary_new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		binary_new_node->right = parent->right;
		binary_new_node->right->parent = binary_new_node;
	}
	parent->right = binary_new_node;

	return (binary_new_node);
}
