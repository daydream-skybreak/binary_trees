#include "binary_trees.h"
/**
 * binary_tree_depth - depth ofa node in a binary tree
 * @tree: a binary tree
 * Return: the depth of the node or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{

		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
