#include "binary_trees.h"

/**
 * binary_tree_uncle - locates the uncle of a node in a tree.
 * @node: A pointer to the node to find the uncle.
 * Return: If node has no uncle, return NULL. Otherwise return pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;
	binary_tree_t *grandparent = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (uncle);
	}

	grandparent = node->parent->parent;
	if (grandparent == NULL)
	{
		return uncle;
	}

	if (grandparent->left == node->parent)
	{
		uncle = grandparent->right;
	} else
	{
		uncle = grandparent->left;
	}

	return uncle;
}
