#include "binary_trees.h"

/**
 * binary_tree_is_avl - this function will search for valid binary tree.
 *
 * @tree: root node ptr.
 *
 * Return: 1 in case the tree is valid or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (aval_tree(tree, INT_MIN, INT_MAX));
}

/**
 * aval_tree - function will search for the crediblty of the binary tree.
 *
 * @tree: root node ptr.
 *
 * @min: this is the min value.
 *
 * @max:  this is the max value.
 *
 * Return: 1 or 0
 */
int aval_tree(const binary_tree_t *tree, int min, int max)
{
	int path_l, path_r;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	path_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	path_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(path_l - path_r) > 1)
		return (0);

	return (aval_tree(tree->left, min, tree->n - 1) &&
		aval_tree(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_height - this func will calc the binary tree height.
 *
 * @tree: tree height.
 *
 * Return: 0 or the tree height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
