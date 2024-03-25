#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Evaluates if a node is a leaf of a binary tree.
 * @node: A pointer to the next node
 * Return: If node is a leaf, return 1. Otherwise return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node != NULL && node->left == NULL && node->right == NULL);
}
