#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t height_left = 0, height_right = 0;

		if (tree->left)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			height_right = 1 + binary_tree_height(tree->right);
		}

		if (height_left > height_right)
		{
			return (height_left);
		}
		else
		{
			return (height_right);
		}
	}
	return (0);
}
