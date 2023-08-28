#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer of created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!(parent->left))
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	return (new);
}
