#include "binary_trees.h"

/**
 * binary_tree_delete - this is a function to deletes an entire binary tree.
 *
 * @tree: tree ptr to be deleted.
 *
 * Description: na if result is null.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
