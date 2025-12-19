// This Programme is Solved By Ridwan Ahmed{315241092}
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* deleteAtSecond(struct node* head) {
    if (head == NULL || head->next == NULL) {
        printf("Cannot delete second node — list too short.\n");
        return head;
    }
struct node* temp = head->next;
    head->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
    return head;
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    struct node* curr = head;
    printf("Before deletion: ");
    while (curr) { printf("%d->", curr->data); curr = curr->next; }
    printf("NULL\n");

    head = deleteAtSecond(head);

    curr = head;
    printf("After deletion: ");
    while (curr) { printf("%d->", curr->data); curr = curr->next; }
    printf("NULL\n");

    while (head) {
        curr = head;
        head = head->next;
        free(curr);
    }

    return 0;
}

