#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserta nuevo nodo hijo izquierdo
 * @parent: puntero padre
 * @value: valor del nodo
 *
 * Return: puntero al nuevo nodo o NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
	{
		new->left = NULL;
	}
	new->right = NULL;

	parent->left = new;

	return (new);
}
