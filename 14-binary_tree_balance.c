#include "binary_trees.h"

/**
 *binary_tree_balance - function inorder
 *@tree: tree
 *Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int height_left = 0;
	int height_right = 0;

	if (tree != NULL)
	{
		height_left = !tree->left ? 0 : binary_tree_height(tree->left) + 1;
		height_right = !tree->right ? 0 : binary_tree_height(tree->right) + 1;

		balance = height_left - height_right;
		return (balance);
	}
	return (0);
}

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = !tree->left ? 0 : binary_tree_height(tree->left) + 1;
	height_right = !tree->right ? 0 : binary_tree_height(tree->right) + 1;

	if (height_right > height_left)
		return (height_right);
	else
		return (height_left);
}
