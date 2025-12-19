// This Programme is Solved By Ridwan Ahmed{315241092}
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* head = (struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*) malloc(sizeof(struct node));
    struct node* third = (struct node*) malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;
 struct node* current = head;
    printf("link list before insertion: ");
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = 25;
    newnode->next = third;
    second->next = newnode;
    current = head;
    printf("link list after insertion: ");
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}

