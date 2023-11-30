#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds the sibling of a node
 *@first: node
 *@second: second node
 *Return: returns the least common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t c1;
	size_t c2;
	int x = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	c1 = binary_tree_depth(first);
	c2 = binary_tree_depth(second);
	x = c1 - c2;
	if (x > 0)
	{
		for (; x > 0; x--)
			first = first->parent;
		while (first && second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			first = first->parent;
			second = second->parent;
		}
	}
	if (x <= 0)
	{
		for (; x < 0; x++)
			second = second->parent;
		while (first && second)
		{
			if (first == second)
				return ((binary_tree_t *)second);
			first = first->parent;
			second = second->parent;
		}
	}
	return (NULL);
}

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
