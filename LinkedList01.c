#include<stdio.h>
#include<stdlib.h>

    struct node
    {

        int data;
        struct Node *next;
        /* data */
    };

    

void main(){

    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = 10;
    newNode -> next = NULL;

    printf("Data = %d\t", newNode->data);
    printf("Next = %p\t", newNode->next);

    free(newNode);

}
