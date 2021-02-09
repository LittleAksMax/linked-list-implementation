#include "linkedlist.h"

#define NULL_NODE ((void*)0)                         // practically NULL

Node* ll_create_node(int val)
{
    Node* new_node = (Node*)malloc(sizeof(Node));    // allocate on heap, as linked lists should just keep on growing
    new_node->value = val;                            
    new_node->next = NULL_NODE;                      // set next to NULL, to avoid problems
    return new_node;
}

void ll_f_insert(Node** head, Node* node_to_insert)
{
    if (node_to_insert == NULL_NODE) return;

    node_to_insert->next = *head;
    *head = node_to_insert;
}

void ll_b_insert(Node** head, Node* node_to_insert)
{
    if (node_to_insert == NULL_NODE) return;

    Node* prev = NULL_NODE, * temp = *head;          // prev is to make sure the new node is linked up
    while (temp != NULL_NODE)
    {
        prev = temp;
        temp = temp->next;
    }
    temp = node_to_insert;
    node_to_insert->next = NULL_NODE;                // make sure the next of this node is NULL
    if (prev != NULL_NODE)
        prev->next = node_to_insert;
}

Node* ll_remove(Node** head, int val)
{
    Node* temp = *head;
    while (temp->next != NULL_NODE)
    {
        if (temp->next->value == val)
        {
            temp->next = temp->next->next;
            return temp->next;                       // return to be freed if allocated on heap
        }
        temp = temp->next;
    }
    return NULL_NODE;
}

Node* ll_find(Node** head, int val)
{
    Node* temp = *head;
    while (temp != NULL_NODE)
    {
        if (temp->value == val) return temp;         // could also break here, and return temp at the end, same result
        temp = temp->next;
    }
    return NULL_NODE;                                // not found
}
