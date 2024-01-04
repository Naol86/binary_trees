#include "binary_trees.h"

/**
 * binary_tree_is_root - check weather a node is root or not
 * @node: current node
 * Return: 1 if a node is root other wise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
