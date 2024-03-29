#include "binary_trees.h"

/**
 * binary_tree_inorder - This function will use.
 * in-order traversal collects a binary tree.
 *
 * @tree: traverse the tree.
 *
 * @func: caller function.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
