// This Programme is Solved By Ridwan Ahmed{315241092}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* deleteAtLast(struct node* head) {
    if (head == NULL) {
        printf("List is empty — nothing to delete.\n");
        return NULL;
    }
    if (head->next == NULL) {
        // Only one node in the list
        printf("Deleted: %d\n", head->data);
        free(head);
        return NULL;
    }
    // Find the second‑to‑last node
    struct node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    // curr points to the node before the last
    struct node* temp = curr->next;
    printf("Deleted: %d\n", temp->data);
    curr->next = NULL;
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

    head = deleteAtLast(head);

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

