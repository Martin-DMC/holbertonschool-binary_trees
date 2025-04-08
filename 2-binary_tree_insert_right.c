#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserta nuevo nodo hijo derecho
 * @parent: puntero padre
 * @value: valor del nodo
 *
 * Return: puntero al nuevo nodo o NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
	{
		new->right = NULL;
	}
	parent->right = new;

	return (NULL);
}
