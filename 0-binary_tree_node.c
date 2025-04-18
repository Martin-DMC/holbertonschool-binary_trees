#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creador de nuevos nodos
 * @parent: puntero al padre
 * @value: valor del nodo
 *
 * Return: punyero al nodo o NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
