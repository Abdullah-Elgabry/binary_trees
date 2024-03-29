#include "binary_trees.h"

/**
 * binary_tree_depth - measures node depth.
 *
 * @tree: targeted node.
 *
 * Return: 0 if null or the depth.
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
