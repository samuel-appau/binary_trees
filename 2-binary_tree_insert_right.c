#include "binary_trees.h"
#include <stddef.h>
/**
* *binary_tree_insert_right - inserts a node as the right child
* of another node
* @parent: pointer to parent node
* @value: value to put in new node
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		new_node->left = NULL;
		if (parent->right == NULL)
		{
			parent->right = new_node;
			new_node->parent = parent;
			new_node->right = NULL;
		}
		else
		{
			new_node->right = parent->right;
			parent->right->parent = new_node;
			parent->right = new_node;
			new_node->parent = parent;
		}
	}
	return (new_node);
}
