#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of a node
 * @tree: current node
 * Return: size_t depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
