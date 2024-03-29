#include "binary_trees.h"

/**
 * binary_tree_is_perfect - this is a cheaker for a binary tree if it perfect.
 *
 * @tree: root node ptr of the tree to check.
 *
 * Return: zero if tree is not perfect or null and one if the tree is perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *_pow_recursion - this will returns x val and raised to the power of y val.
 *
 *@x: exponentiate val.
 *
 *@y: the power to raise x to.
 *
 *Return: -1 or x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_tree_size - binary tree size to measure.
 *
 * @tree: targeted tree to measure.
 *
 * Return: zero or the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - this function will calc binary tree height.
 *
 * @tree: targeted tree.
 *
 * Return: 0 if null or null
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
