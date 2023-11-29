#include "binary_trees.h"
#include <math.h>
/**
 *_pow - returns x to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: Success
 */

int _pow(int x, int y)
{
	int result = 1;

	while (y > 0)
	{
		result *= x;
		y--;
	}

	return (result);
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

/**
 *binary_tree_is_perfect - function inorder
 *@tree: tree
 *Return: size of leaves
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height = 0;
	size_t res = 0;
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	tree_height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	res = _pow(2, tree_height + 1) - 1;
	if (res == nodes)
		return (1);

	return (0);
}

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
