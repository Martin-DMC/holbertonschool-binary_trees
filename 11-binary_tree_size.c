#include "binary_trees.h"

/**
 * binary_tree_size - Mide el tamaÃo de un arbol binario
 * @tree: puntero al nodo raiz del arbol
 *
 * Return: TamaÃo± de arbol(numero total de nodos), o 0 si tree es NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
