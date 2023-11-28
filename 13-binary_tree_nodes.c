#include "binary_trees.h"

/**
 *binary_tree_nodes - function inorder
 *@tree: tree
 *Return: size of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		leaves += (tree->left || tree->right) ? 1 : 0;
		leaves += binary_tree_nodes(tree->left);
		leaves += binary_tree_nodes(tree->right);
		return (leaves);
	}
	return (0);
}
