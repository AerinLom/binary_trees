#include "binary_trees.h"

/**
 * binary_tree_insert_right - puts in a node as a right child of another tree
 * @parent: A pointer to the node to insert the right child.
 * @value: The value to store in the new node.
 * Return: If parent or an error, return NULL. Otherwise point to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);

}
