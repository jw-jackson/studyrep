#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;

typedef struct _list_node
{
    ElementType value;
    struct _list_node *next;
    struct _list_node *prev;

} list_node;

typedef list_node *head;

void inithead(head *head_ptr)
{
    *head_ptr = (head)malloc(sizeof(list_node));
    (*head_ptr)->value = 0;
    (*head_ptr)->next = *head_ptr;
    (*head_ptr)->prev = *head_ptr;
}

void insertathead(head the_head, ElementType value)
{
    list_node *newNode = (list_node *)malloc(sizeof(list_node));

    newNode->value = value;
    newNode->next = the_head->next;
    newNode->prev = the_head;

    the_head->next->prev = newNode;
    the_head->next = newNode;
    if (the_head->value == 0) { the_head->prev = newNode; }
    (the_head->value)++;
}
void insertattail(head the_head, ElementType value)
{
    list_node *newNode = (list_node *)malloc(sizeof(list_node));

    newNode->value = value;
    newNode->next = the_head;
    newNode->prev = the_head->prev;

    the_head->prev->next = newNode;
    the_head->prev = newNode;
    if (the_head->value == 0) { the_head->next = newNode; }
    (the_head->value)++;
}

void printlist(head the_head)
{
    if (the_head->value == 0) { return; }

    list_node *ptr;
    ptr = the_head->next;
    while (ptr != the_head) {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

void xigou(head the_head){
    list_node * ptr;
    ptr = the_head -> prev;
    while ( ptr != the_head )
    {
        list_node * temp = ptr;
        ptr = ptr -> prev;
        free(temp);
    }
    free(the_head);
}
int main(int argc, char *argv[])
{
    head myhead;
    inithead(&myhead);
    insertathead(myhead, 5);
    insertathead(myhead, 4);
    insertathead(myhead, 3);
    insertathead(myhead, 2);
    insertathead(myhead, 1);
    insertattail(myhead, 6);
    insertattail(myhead, 7);
    insertattail(myhead, 8);
    insertattail(myhead, 9);
    printlist(myhead);
    xigou(myhead);
    return 0;
}
