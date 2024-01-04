#include "binary_trees.h"

/**
 * binary_tree_postorder - traversing a tree by post order
 * left -> right -> root
 * @tree: root of a tree
 * @func: function to print a val of a node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
