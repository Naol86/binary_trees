#include "binary_trees.h"

/**
 * binary_tree_nodes - count number of nodes
 * @tree: root of a tree
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
