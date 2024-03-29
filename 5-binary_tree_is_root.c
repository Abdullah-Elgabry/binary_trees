#include "binary_trees.h"

/**
 * binary_tree_is_root - this is a ceaker fro a root node.
 *
 * @node: the targeted node.
 *
 * Return: 0 if it null or if not a root and 1 if node is a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
