#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of binary tree
 * @tree: tree to measure the depth of
 * Return: depth of the tree or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_from_root = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	depth_from_root = binary_tree_depth(tree->parent);

	return (depth_from_root + 1);
}
