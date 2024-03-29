#include "binary_trees.h"

/**
 * binary_tree_leaves - This is function to counts the binary tree leaves.
 *
 * @tree: targeted tree to count their leaves.
 *
 * Return: 0 if null or leaves number.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
