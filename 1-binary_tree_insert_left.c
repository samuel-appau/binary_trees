#include "binary_trees.h"
#include <stddef.h>
/**
* *binary_tree_insert_left - inserts a node as the left child
* of another node
* @parent: pointer to parent node
* @value: value to put in new node
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}

	else if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = value;
		new_node->right = NULL;
		if (parent->left == NULL)
		{
			parent->left = new_node;
			new_node->parent = parent;
			new_node->left = NULL;
		}
		else
		{
			new_node->left = parent->left;
			parent->left->parent = new_node;
			parent->left = new_node;
			new_node->parent = parent;
		}
	}
	return (new_node);
}
