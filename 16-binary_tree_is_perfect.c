#include "binary_trees.h"

/**
 * binary_tree_height - Calcula la altura de un arbol binario
 * @tree: Puntero al nodo raiz
 *
 * Return: Altura del arbol o 0 si tree es NULL
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
 * is_perfect_recursive-Verifica recursivamente si un arbol binario es perfecto
 * @tree: puntero al nodo raiz del arbol
 * @height: Altura total del arbol
 * @level: Nivel actual
 * Return: 1 si el arbol es perfecto, 0 si no lo es
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t height,
		size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (level == height);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, height, level + 1) &&
			is_perfect_recursive(tree->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - Verificar si un arbol binario es perfecto
 * @tree: Puntero al nodo raiz
 *
 * Return: 1 si el arbol es perfecto, 0 si no lo es
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect_recursive(tree, height - 1, 0));
}
