#include<stdlib.h>
#include<stdio.h>

typedef struct node_t node_t;
struct node_t
{
    int data;
    node_t *r_child;
    node_t *l_child;
};

node_t add_node(node_t parent, int node_data)
{
    node_t new_node = *(node_t *)malloc(sizeof(node_t));
    new_node.data = node_data;

    if (!parent.l_child)
    {
        parent.l_child = &new_node;
    }
    else
    {
        parent.r_child = &new_node;
    }

    return new_node;
}

void inorder(node_t* ptr)
{
    if(ptr)
    {
        inorder(ptr->l_child);
        printf("%d",ptr->data);
        inorder(ptr->r_child);
    }
}

void main()
{
    node_t root;
    node_t* ptr=&root;
    root.data = 1;
    int array[5]={3,4,5,6};
    for(int i=0;i<5;i++){
        node_t sec_node = add_node(root, array[i]);
    }
    inorder(ptr);
}
