#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main(){
    struct node* head =(struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    head -> data =10;
    head -> next = second;

    second -> data =20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    struct node* current = head;
    while(current != NULL) {
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);
}
