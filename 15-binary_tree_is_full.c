#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!(tree->left) && !(tree->right))
			return (1);
		else if ((tree->left) && (tree->right))
		{
			if (binary_tree_is_full(tree->left) && (binary_tree_is_full(tree->right)))
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
