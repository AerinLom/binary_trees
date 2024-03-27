#include "binary_trees.h"

/**
 * binary_tree_sibling - locates sibling of a node in a tree.
 * @node: A pointer to the node to find the sibling.
 * Return: If there is no sibiling return NULL, otherwise return pointer.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
	{
		return sibling;
	}

	if (node->parent->left == node)
	{
		sibling = node->parent->right;
	} else 
	{
		sibling = node->parent->left;
	}

	return sibling;
}
