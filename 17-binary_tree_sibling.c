#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo en un arbol binario
 * @node: Puntero al nodo para encontrar su hermano
 *
 * Return: Puntero al nodo hermano o NULL si no existe
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}

