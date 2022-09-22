#include "binary_trees.h"
/**
 * binary_tree_is_root - checks whether a node is root or not
 * @node: the node to check
 * Return: 1 if it is a root and 0 if it is not or it is null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
