#include "binary_trees.h"

/**
 * binary_tree_uncle - this function will finds the node uncle
 *
 * @node: uncle ptr node.
 *
 * Return:  null or pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - this function will sibling of a node.
 *
 * @node: sibling node.
 *
 * Return: null or pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
