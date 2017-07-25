#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
		return (new_node);
	}
	else
	{
		parent->right = new_node;
		return (new_node);
	}
}