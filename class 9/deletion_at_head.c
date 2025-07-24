#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* deleteAtBeginning(struct node* head) {
    if (head == NULL) {
        printf("List is empty — nothing to delete.\n");
        return NULL;
    }
    struct node* temp = head;
    head = head->next;
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
  
    head = deleteAtBeginning(head);
    
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
