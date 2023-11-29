#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: node
 *Return: returns the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s_left;
	binary_tree_t *s_right;

	if (node != NULL && node->parent != NULL)
	{
		s_left = node->parent->left;
		s_right = node->parent->right;
		if (s_right != NULL && s_left != NULL)
			if (s_left->n == node->n)
				return (s_right);
		return (s_left);
		return (NULL);
	}
	return (NULL);
}
