#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new left child node into binary tree.
 * @parent: Pointer to parent node where the new left child is attached.
 * @value: Value stored in new left child node.
 * Return: Pointer to new left child node if success, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree = binary_tree_node(parent, value);

	if (!parent)
	{
		return (NULL);
	}

	if (!binary_tree)
	{
		return (NULL);
	}

	if (!parent->left)
	{
		binary_tree->left = parent->left;
		parent->left->parent = binary_tree;
	}
	parent->left = binary_tree;
	return (binary_tree);
}

