#include "binary_trees.h"

/**
 * array_to_bst - this function will
 * make a bst from arr.
 *
 * @array: 1st ele arr.
 *
 * @size: arr num.
 *
 * Return: root node ptr.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
