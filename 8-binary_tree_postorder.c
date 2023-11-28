#include "binary_trees.h"

/**
 *binary_tree_postorder - function postorder
 *@tree: tree
 *func - cunt to print the value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
    {
      binary_tree_postorder(tree->left,  func );
      binary_tree_postorder(tree->right,  func);
      func(tree->n);
    }
}
