#include <stdlib.h>
#include <stdio.h>

typedef struct node_t{
    struct node_t* next_node;
    int value;
}node_t;

node_t* init_list(int value)
{
    node_t* node = calloc(1, sizeof(node_t));
    node->value = value;
    node->next_node = NULL;
    return node;
}

node_t* add_link(node_t* linked_list, int value) 
{
    node_t* node = init_list(value);
    if (linked_list != NULL)
    {
        while (linked_list->next_node != NULL)
        {
            linked_list = linked_list->next_node;
        }
        linked_list->next_node = node;
        
    }
    return linked_list;
}


void print_linked_list(node_t* node)
{
    while(node->next_node != NULL)
    {
        printf("%d\n", node->value);
        node = node->next_node;
    }
    printf("%d\n", node->value);
}

int main()
{
    node_t* root = init_list(10);
    add_link(root, 7);
    add_link(root, 3);
    add_link(root, 5);
    add_link(root, 9);
    print_linked_list(root);
}