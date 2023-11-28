#include "binary_trees.h"

/**
   @parent: parent of the tree
   @value:value of each node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *node = malloc(sizeof(binary_tree_t));
  if (node == NULL)
    return (NULL);

  node->parent = parent;
  node->left = NULL;
  node->right = NULL;
  node->n = value;

  return (node);
}