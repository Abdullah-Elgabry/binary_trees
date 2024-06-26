#include "binary_trees.h"

/**
 * binary_tree_sibling - node silbling finder.
 *
 * @node: sibling ptr.
 *
 * Return: null in case nde is null or parent
 * is NULL or the node has no siblings
 * or the node silbling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
