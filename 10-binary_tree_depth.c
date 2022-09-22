#include "binary_trees.h"
/**
 * binary_tree_depth - depth ofa node in a binary tree
 * @tree: a binary tree
 * Return: the depth of the node or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
