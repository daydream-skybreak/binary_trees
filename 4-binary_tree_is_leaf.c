#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 * @node: the node to check
 * Return: 1 if the node is leaf and 0 if it is not or it is null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent && (!node->left && !node->right))
		return (1);
	else
		return (0);
}
