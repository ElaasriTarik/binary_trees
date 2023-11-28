#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = !tree->parent ? 0 : binary_tree_depth(tree->parent) + 1;

	return (depth);
}
