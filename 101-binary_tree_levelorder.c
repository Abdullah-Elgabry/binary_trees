#include "binary_trees.h"

/**
 * binary_tree_levelorder - this function will traverst
 * a binary tree using level-order traverse.
 *
 * @tree: traverse tree.
 *
 * @func: call for each node ptr.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - this function will use post-order traverse.
 *
 * @tree: traverse tree.
 *
 * @func: call for each node ptr.
 *
 * @level: tree level to call.
 */

void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - this function will clac height of a binary tree.
 *
 * @tree: measure the tree height.
 *
 * Return: null or  height of the tree
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
