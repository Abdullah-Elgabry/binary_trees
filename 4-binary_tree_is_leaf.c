#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This is a cheaker for a leaf node.
 *
 * @node: the targeted node.
 *
 * Return: 0 means null or not a leaf 1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
