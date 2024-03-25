#include "binary_trees.h"

/**
 * binary_tree_is_root - Evaluates if a node is a root of a binary tree.
 * @node: A pointer to the new node.
 * Return: If the node is a root, return 1. Otherwise return 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->parent == NULL);
}
