#include "binary_trees.h"

/**
 *binary_tree_preorder - function inorder
 *@tree: tree
 *@func: cunt to print the value
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
