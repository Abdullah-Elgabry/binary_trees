#include "binary_trees.h"

/**
 * binary_tree_insert_right - R-Childern function that will
 *  inserts a node as the right-child of another node.
 *
 * @parent: this is a ptr to the node to insert the right-child.
 *
 * @value: new node value.
 *
 * Return: null or ptr of the new node.
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
