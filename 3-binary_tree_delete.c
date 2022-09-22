#include "binary_trees.h"
/**
 * binary_tree_delete - delete a binary tree
 * @tree: a binary treeto be deleted
 * Return: void(nothing)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
