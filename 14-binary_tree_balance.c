#include "binary_trees.h"

/**
 * binary_tree_height - Calcula la altura de un árbol binario
 * @tree: Puntero al nodo raíz
 *
 * Return: Altura del árbol o 0 si tree es NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Mide el factor de balance de un arbol binario
 * @tree: puntero al nodo raiz
 *
 * Return: Factor de balance (altura izquierda - altura derecha)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left)
			- (int)binary_tree_height(tree->right));
}
