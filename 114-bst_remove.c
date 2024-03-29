#include "binary_trees.h"
/**
 * indect - return the min indect.
 *
 * @node: tageted tree.
 *
 * Return: tree minimum val.
 */

int indect(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = indect(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}
}
/**
 * sndch - this is a func will return nxt idenct.
 *
 * @root: 2child node
 *
 * Return: founded val.
 */
int sndch(bst_t *root)
{
	int new_value = 0;

	new_value = indect(root->right);
	root->n = new_value;
	return (new_value);
}
/**
 *remove_type - this func will delete the node.
 *
 *@root: targeted node.
 *
 *Return: child numbers or null.
 */
int remove_type(bst_t *root)
{
	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
		return (sndch(root));
}
/**
 * bst_remove - delete the bst tree.
 *
 * @root: tree root.
 *
 * @value: naode vale.
 *
 * Return:new tree.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_type(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);
	return (root);
}
