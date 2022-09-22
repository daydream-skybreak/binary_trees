#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of another node
 * @parent: the parent node to which the node should be inserted
 * @value: the value the inserted node will hold
 * Return: pointer to the inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;
	parent->left = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
