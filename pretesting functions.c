0-binary_tree_node.c
#include "binary_trees.h"

/**
binary_tree_node - creates a binary tree node
@parent: a pointer to the parent node to create
@value: the value to store in the new node

Return: a pointer to the new node, or NULL on failure
/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
;
}


1-binary_tree_insert_left.c
#include "binary_trees.h"

/**
binary_tree_insert_left - inserts a node as the left-child of another node
@parent: a pointer to the parent node to insert the left-child in
@value: the value to store in the new node

Return: a pointer to the created node, or NULL on failure or if
parent is NULL
/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
;
}


2-binary_tree_insert_right.c
#include "binary_trees.h"

/**
binary_tree_insert_right - inserts a node as the right-child of another node
@parent: a pointer to the parent node to insert the right-child in
@value: the value to store in the new node

Return: a pointer to the created node, or NULL on failure or if
parent is NULL
/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
;
}


3-binary_tree_delete.c
#include "binary_trees.h"

/**
binary_tree_delete - deletes an entire binary tree
@: a pointer to the root node of the tree to delete

Return: Nothing
/
void binary_tree_delete(binary_tree_t *tree)
{
;
}


4-binary_tree_is_leaf.c
#include "binary_trees.h"

/**
binary_tree_is_leaf - checks if a node is a leaf
@node: a pointer to the node to check

Return: 1 if node is a leaf, otherwise 0
/
int binary_tree_is_leaf(const binary_tree_t *node)
{
;
}

5-binary_tree_is_root.c
#include "binary_trees.h"

/**
binary_tree_is_root - checks if a given node is a root
@node: a pointer to the node to check

Return: 1 if node is a root, otherwise 0
/
int binary_tree_is_root(const binary_tree_t *node)
{
;
}


6-binary_tree_preorder.c
#include "binary_trees.h"

/**
binary_tree_preorder - goes through a binary tree using pre-order traversal
@tree: a pointer to the root node of the tree to traverse
@func: a pointer to a function to call for each node

Return: Nothing. Just executes the function pointed in func
/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
;
}


7-binary_tree_inorder.c
#include "binary_trees.h"

/**
binary_tree_inorder - goes through a binary tree using in-order traversal
@tree: a pointer to the root node of the tree to traverse
@func: a pointer to a function to call for each node

Return: Nothing. Just executes the function pointed in func
/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
;
}


8-binary_tree_postorder.c
#include "binary_trees.h"

/**
binary_tree_postorder - goes through a binary tree using
post-order traversal
@tree: a pointer to the root node of the tree to traverse
@func: a pointer to a function to call for each node

Return: Nothing. Just executes the function pointed in func
/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
;
}


9-binary_tree_height.c
#include "binary_trees.h"

/**
binary_tree_height - measures the height of a binary tree
@tree: a pointer to the root node of the tree to measure the height

Return: the height of the tree, or 0 if the tree is NULL
/
size_t binary_tree_height(const binary_tree_t *tree)
{
;
}


10-binary_tree_depth.c
#include "binary_trees.h"

/**
binary_tree_depth - measures the depth of a node in a binary tree
@: a pointer to the node to measure the depth

Return: the depth of a node, or 0 if the tree is NULL
/
size_t binary_tree_depth(const binary_tree_t *tree)
{
;
}


11-binary_tree_size.c
#include "binary_trees.h"

/**
binary_tree_size - measures the size of a binary tree
@tree: a pointer to the root node of the tree to measure the size

Return: the size of a binary tree, or 0 if the tree is NULL
/
size_t binary_tree_size(const binary_tree_t *tree)
{
;
}

12-binary_tree_leaves.c
#include "binary_trees.h"

/**
binary_tree_leaves - counts the leaves in a binary tree
@tree: a pointer to the root node of the tree to count the number of leaves

Return: the number of leaves, or 0 if the tree is NULL
/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
;
}


13-binary_tree_nodes.c
#include "binary_trees.h"

/**
binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
@tree: a pointer to the root node of the tree to count the number of nodes

Return: the requested nodes, or 0 if the tree is NULL
/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
;
}


14-binary_tree_balance.c
#include "binary_trees.h"

/**
binary_tree_balance - measures the balance factor of a binary tree
@tree: a pointer to the root node of the tree to measure the balance factor

Return: the balance factor, or 0 if the tree is NULL
/
int binary_tree_balance(const binary_tree_t *tree)
{
;
}


15-binary_tree_is_full.c
#include "binary_trees.h"

/**
binary_tree_is_full - checks if a binary tree is full
@tree: a pointer to the root node of the tree to check

Return: 1 if the tree is full, 0 otherwise
/
int binary_tree_is_full(const binary_tree_t *tree)
{
;
}


16-binary_tree_is_perfect.c
#include "binary_trees.h"

/**
binary_tree_is_perfect - checks if a binary tree is perfect
@tree: a pointer to the root node of the tree to check

Return: 1 if the tree is perfect, 0 otherwise
/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
;
}


17-binary_tree_sibling.c
#include "binary_trees.h"

/**
binary_tree_sibling - finds the sibling of a node
@node: a pointer to the node to find the sibling

Return: the sibling node, or NULL if:
- the parent is NULL
- node is NULL
- node has no sibling
/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
;
}

18-binary_tree_uncle.c
#include "binary_trees.h"

/**
binary_tree_uncle - finds the uncle of a node
@node: a pointer to the node to find the uncle

Return: the uncle node, or NULL if:
- node is NULL
- node has no uncle
/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
;
}