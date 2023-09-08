#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: return the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree)
	{
		if (tree->parent)
			parent += binary_tree_depth(tree->parent) + 1;
	}
	return parent;
}
