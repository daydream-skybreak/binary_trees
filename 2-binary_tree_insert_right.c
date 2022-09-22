#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right
 * @parent: the node to which the new node is added
 * @value: the value the new node will hold
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	node->left = NULL;
	parent->right = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
