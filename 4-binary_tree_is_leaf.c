#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check weather a node is leaf or not
 * @node: current node of tree
 * Return: 1 if it is leaf other wise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
