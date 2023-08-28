#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to be checked
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return(1);
	else if (node->right == NULL && node->left == NULL)
		return(1);
	else
		return(0);
}
