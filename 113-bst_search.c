#include "binary_trees.h"

/**
 * bst_search - this function will finds
 * bst val.
 *
 * @tree: root node ptr.
 *
 * @value: the tree val.
 *
 * Return: null or targeted node ptr.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
