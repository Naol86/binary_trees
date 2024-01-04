#include "binary_trees.h"

/**
 * binary_tree_height - find height of a tree
 * @tree: root of a tree
 * Return: height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	return (right);
}
