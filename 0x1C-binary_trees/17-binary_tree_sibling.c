#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling of
 * Return: pointer to sibling of node or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->n > node->parent->n) && (node->parent->left != NULL))
		return (node->parent->left);
	else if ((node->n < node->parent->n) && (node->parent->right != NULL))
		return (node->parent->right);
	else
		return (NULL);
}
