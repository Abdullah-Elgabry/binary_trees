#include "binary_trees.h"

/**
 * binary_tree_is_full - This is a cheaker for a binary tree if it full.
 *
 * @tree: targeted ndoe to cheak.
 *
 * Return: zero if tree is not full or null or one if the tree is full.
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
