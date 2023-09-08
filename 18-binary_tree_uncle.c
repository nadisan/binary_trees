#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	else if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle -  finds the sibling of a node's parent
 * @node: a pointer to the node to find the sibling
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node || node->parent)
		if (binary_tree_sibling(node->parent))
			return (binary_tree_sibling(node->parent));
	return (NULL);
}
