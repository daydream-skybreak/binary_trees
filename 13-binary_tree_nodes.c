#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the leaves in tree
 * @tree: binary tree
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	leaves = binary_tree_nodes(tree->left) +
		 binary_tree_nodes(tree->right) + 1;

	return (leaves);
}
