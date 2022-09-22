#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node created
 * @value: the value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = NULL;
	}
	else
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
