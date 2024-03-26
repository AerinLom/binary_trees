#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count.
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;


	if (tree == NULL)
	{
		return (num_nodes);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
	num_nodes += 1;
	}

	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);

	return (num_nodes);
}
