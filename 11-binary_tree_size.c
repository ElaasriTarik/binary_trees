#include "binary_trees.h"

/**
 *binary_tree_size - function inorder
 *@tree: tree
 *Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;
	size_t left = 0;
	size_t right = 0;

	if (tree != NULL)
	{
		left = !tree->left ? 0 : binary_tree_size(tree->left);
		right = !tree->right ? 0 : binary_tree_size(tree->right);
		s += left + right;
		return (s);
	}
	return (0);
}
