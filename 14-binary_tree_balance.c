#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a binary tree
 * Return: the height of the tree
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

/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: binary tree
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh - rh);
}
