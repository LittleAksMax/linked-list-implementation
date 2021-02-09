/*
 * create_node() 
 * find()
 * remove()                   -- difficult with singly linked list, but doable
 * f_insert()                 -- both insert functions could (and perhaps should) be done with a bool return value, 
 *                               to check for unsuccessful insertions
 * b_insert()                 -- should use a tail for this, but if you want to, you can do that yourself
 */


#include <stdlib.h>

typedef struct Node
{
    int value;                // Data
    struct Node* next;        // pointer to next node
} Node;

/* ll_create_node(): creates a node with the given value */
Node* ll_create_node(int);

/* ll_f_insert(): attaches node to the beginning of list */
void ll_f_insert(Node**, Node*);

/* ll_b_insert(): attaches node to the end of list */
void ll_b_insert(Node**, Node*);

/* ll_remove(): removes node in list
 * returns node to be free()'d if allocated on heap
 * if not present, returns NULL_NODE 
 */
Node* ll_remove(Node**, int);

/* ll_find(): returns node with given value
 * if no node with given value present, return NULL_NODE
 */
Node* ll_find(Node**, int);