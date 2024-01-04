#include "binary_trees.h"

/**
 * binary_tree_leaves - count number of leaves
 * @tree: root of a tree
 * Return: size_t number of leaves nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int ans;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	ans = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (ans);
}
