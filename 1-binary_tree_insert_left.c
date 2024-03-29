#include "binary_trees.h"

/**
 * binary_tree_insert_left -
 * this is the insertion node function to the left-child to another node.
 *
 * @parent: this is a ptr to the node to insert the left-child in.
 *
 * @value:  new ndoe value.
 *
 * Return: new node ptr or null.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
