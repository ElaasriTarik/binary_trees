#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: node
 *Return: returns the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib_left;
	binary_tree_t *sib_right;

	if (node != NULL || node->parent != NULL)
	{
		sib_left = node->parent->left;
		sib_right = node->parent->right;
		return (sib_right != NULL && sib_left != NULL ? sib_left->n == node->n ? sib_right : sib_left : NULL);
	}
	return (NULL);
}
