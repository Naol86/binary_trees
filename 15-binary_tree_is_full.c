#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: root of a tree
 * Return: 1 for True 0 for False
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (1);
	if (tree->left != NULL && tree->left == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left + right > 0 ? 1 : 0);

}
