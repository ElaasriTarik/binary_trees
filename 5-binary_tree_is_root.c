#include "binary_trees.h"

/**
 *binary_tree_is_root - function to check if is root
 *@node: node
 *Return: success
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL && (node->left != NULL || node->right != NULL))
		return (1);

	return (0);
}
