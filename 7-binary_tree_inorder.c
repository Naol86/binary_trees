#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a tree by in order left -> root -> right
 * @tree: root of the tree
 * @func: function to print a val of the node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
