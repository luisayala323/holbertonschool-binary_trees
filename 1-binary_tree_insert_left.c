#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_insert_left - inserts a left child
 *@parent: parent of the node
 *@value: value of the node
 *Return: new node with left child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left_child;

	if (parent == NULL)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
	old_left_child = parent->left;
	parent->left = new_node;
	new_node->left = old_left_child;
	old_left_child->parent = new_node;
	}
	else
	{
	parent->left = new_node;
	new_node->left = NULL;
	}

	return (new_node);
}

