![Binary_tree](http://68.media.tumblr.com/4efcd73bd87ef39e41e149d4820084e7/tumblr_nia6bqA3BB1s7sbgzo1_1280.jpg)

### 0x1C. C - BINARY TREES

#### Synopsis
The objective of this project is to learn about binary trees; including understanding the difference between a binary tree and a binary search tree, what are the pros in terms of time complexity when compared to linked lists. What is the depth, height and size of a binary tree, the different traversal methods to go through a binary tree and what a complete, full, perfect and balanced binary tree is.

#### What are Binary Trees?

In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a triple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set. Some authors allow the binary tree to be the empty set as well.

From a graph theory perspective, binary (and K-ary) trees as defined here are actually arborescences. A binary tree may thus be also called a bifurcating arborescence—a term which appears in some very old programming books,[4] before the modern computer science terminology prevailed. It is also possible to interpret a binary tree as an undirected, rather than a directed graph, in which case a binary tree is an ordered, rooted tree.Some authors use rooted binary tree instead of binary tree to emphasize the fact that the tree is rooted, but as defined above, a binary tree is always rooted. A binary tree is a special case of an ordered K-ary tree, where k is 2.

In computing, binary trees are seldom used solely for their structure. Much more typical is to define a labeling function on the nodes, which associates some value to each node. Binary trees labelled this way are used to implement binary search trees and binary heaps, and are used for efficient searching and sorting. The designation of non-root nodes as left or right child even when there is only one child present matters in some of these applications, in particular it is significant in binary search trees. In mathematics, what is termed binary tree can vary significantly from author to author. Some use the definition commonly used in computer science, but others define it as every non-leaf having exactly two children and don't necessarily order (as left/right) the children either.

#### Authors

Ekaterina Kalache: [github account](https://github.com/KatyaKalache), [twitter](https://twitter.com/KatyaKalache)

Spencer Cheng: [github account](https://github.com/spencerhcheng), [twitter](https://twitter.com/spencerhcheng)


#### FILE SETUP
All files are written and compiled on Ubuntu 14.04 LTS. Programs will be compiled using gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic. All files will end with a new line.

Code will use Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.

<a href="https://github.com/holbertonschool/Betty">Betty Style</a>

#### Data structure for Binary Trees:

<b> Basic Binary Tree </b>
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

<b>Binary Search Tree</b>
```
typedef struct binary_tree_s bst_t;
```

<b>AVL Tree</b>
```
typedef struct binary_tree_s avl_t;
```

<b>Max Binary Heap</b>
```
typedef struct binary_tree_s heap_t;
```

##### 0. New node
A function that creates a binary tree node. `parent` is a pointer to the parent node of the node to create, `value` is the value to put in the new node. Functions returns a pointer to the new node, or `NULL` on failure.

```
spencer@/tmp/binary_trees$ cat 0-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
spencer@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
spencer@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
spencer@/tmp/binary_trees$
```

GitHub repository: holbertonschool-low_level_programming
Directory: 0x1C-binary_trees
File: 0-binary_tree_node.c

##### 1. Insert left
Function that inserts a node as the left-child of another node, where `parent` is a pointer to the node to insert the left-child in, `value` is the value to store in the new node. Function returns a pointer to the newly created node, or `NULL` on failure. If `parent` already has a left-child, the new node must take its place, and the old left-child is set as the left-child of the new node.

```
spencer@/tmp/binary_trees$ cat 1-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
spencer@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
spencer@/tmp/binary_trees$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)                                            
spencer@/tmp/binary_trees$
```


