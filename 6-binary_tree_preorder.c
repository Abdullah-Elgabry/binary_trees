#include "binary_trees.h"

/**
 * binary_tree_preorder - this is a function will use a pre-order traversal.
 *
 * goes through a binary tree .
 *
 * @tree: a traverse tree.
 *
 * @func: a caller function.
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
