#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data);
void insert(struct Node **head, int data);
void deque(struct Node **head);
void deallocate(struct Node** head);

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insert(struct Node **head, int data) {
    struct Node* newNode = createNode(data);
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deque(struct Node **head) {
    struct Node* temp = *head;

    printf("%d -> ", temp->data);

    *head = temp->next;
    free(temp);
}

void deallocate(struct Node** head) {
    struct Node* temp = *head;
    while(temp != NULL) {
        struct Node* next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
}

int main()
{
    struct Node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    
    deque(&head);
    deque(&head);
    deque(&head);
    deallocate(&head);

    return 0;
}