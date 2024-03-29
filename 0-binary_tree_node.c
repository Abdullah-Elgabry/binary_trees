#include "binary_trees.h"

/**
 * binary_tree_node - this function will make a new binary tree node.
 *
 * @parent: - this is a ptr points to the parent node of the node.
 *
 * @value: - node val.
 *
 * Return: null or a ptr to new node.
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nde_new;

	nde_new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (nde_new == NULL)
	{
		return (NULL);
	}

	nde_new->parent = parent;
	nde_new->n = value;
	nde_new->left = NULL;
	nde_new->right = NULL;

	return (nde_new);
}
