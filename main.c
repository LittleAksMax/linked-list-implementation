#include <stdio.h>
#include "linkedlist.h"

void print_list(Node*);

int main()
{
    Node* head = ll_create_node(15); // appoint 'head' the first node

    Node* n2 = ll_create_node(10);
    Node* n3 = ll_create_node(5);
    Node* n4 = ll_create_node(20);
    Node* n5 = ll_create_node(25);

    ll_f_insert(&head, n2);
    ll_f_insert(&head, n3);
    ll_b_insert(&head, n4);
    ll_b_insert(&head, n5);

    print_list(head);

    return 0;
}

void print_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}