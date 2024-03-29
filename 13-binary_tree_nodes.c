#include "binary_trees.h"

/**
 * binary_tree_nodes - this funtion will counts
 * nodes with at least 1 child in a binary tree.
 *
 * @tree: targeted tree to count it's nodes.
 *
 * Return: 0 if null or nodes numbers.
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - function to measures the binary tree size.
 *
 * @tree: targeted tree to measure the size.
 *
 * Return: 0 in null case or the tree size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - This function will counts the leaves in a binary tree.
 *
 * @tree: targeted tree to count the leaves.
 *
 * Return: 0 in null case or leaves number.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
