#include "binary_trees.h"

/**
 * binary_tree_balance - find the difference between left and right nodes
 * @tree: root of tree
 * Return: int the difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	unsigned int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_deep(tree->left);
	right = binary_tree_deep(tree->right);

	return (left - right);
}

/**
 * binary_tree_deep - find height of node
 * @tree: current node
 * Return: unsigned int
 */

unsigned int binary_tree_deep(binary_tree_t *tree)
{
	unsigned int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = 1 + binary_tree_deep(tree->left);
	right = 1 + binary_tree_deep(tree->right);

	if (left > right)
		return (left);
	return (right);
}
