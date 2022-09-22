#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a binary tree
 * Return: the height of the tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	ssize_t left_h, right_h;

	if (!tree)
		return (-1);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h > right_h ? left_h + 1 : right_h + 1);
}
