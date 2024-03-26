#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count.
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;


	if (tree == NULL)
	{
		return (nodes);
	}

	nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
