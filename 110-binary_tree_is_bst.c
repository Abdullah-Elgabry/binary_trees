#include "binary_trees.h"

/**
 * binary_tree_is_bst - this function will checks if a binary tree is a valid.
 *
 * @tree: root node ptr.
 *
 * Return: 1 in valid case or 0
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - this function will checks if a binary tree is a valid
 *
 * @tree: root node ptr.
 *
 * @min: Lower bound.
 *
 * @max: Upper bound of checked nodes
 *
 * Return: 1 in valid case or 0.
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
}
