#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: node
 *Return: returns the unclde node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *u_left;
	binary_tree_t *u_right;

	if (node != NULL && node->parent->parent != NULL)
	{
		u_left = node->parent->parent->left;
		u_right = node->parent->parent->right;
		if (u_right != NULL && u_left != NULL)
		{
			if (u_left == node->parent)
			{
				return (u_right);
			}
			return (u_left);
		}
		return (NULL);
	}
	return (NULL);
}
