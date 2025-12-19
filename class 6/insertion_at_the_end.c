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

    
    printf("Linked List before insertion:\n");
    struct node* current = head;
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");

   
    struct node* fourth = (struct node*) malloc(sizeof(struct node));
    fourth->data = 40;
    fourth->next = NULL;

    current = head;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = fourth;

    printf("Linked List after insertion at the end:\n");
    current = head;
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}

