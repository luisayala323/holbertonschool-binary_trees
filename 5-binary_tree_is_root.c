#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if given node is a root
 *@node: node given
 *Return: 0 if success, 1 if parent is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
	return (1);

	return (0);
}
