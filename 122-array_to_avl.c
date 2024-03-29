#include "binary_trees.h"

/**
 * array_to_avl - this func will make the tree fro arr.
 *
 * @array: this is the arr to put the data in.
 *
 * @size: arr size.
 *
 * Return: null or ptr arr.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
