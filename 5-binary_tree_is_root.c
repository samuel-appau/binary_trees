#include "binary_trees.h"

/**
* binary_tree_is_root - chaecks if binary tree is root
* @node: pointer to node to check
* Return: if node is root return 1 else 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
