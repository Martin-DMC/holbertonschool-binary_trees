#include "binary_trees.h"

/**
 * binary_tree_uncle - Encuentra el tio de un nodo en un arbol binario
 * @node: Puntero al nodo para encontrar su tio
 *
 * Return: Puntero al nodo tio o NULL si no existe
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}

