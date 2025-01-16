// singly
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *current = NULL;

struct Node *createNode(int data);
void insertAtHead(struct Node **head, int data);
void insertAtTail(struct Node **head, int data);
void insertAtPos(struct Node **head, int data, int position);
void deleteFromHead(struct Node **head);
void deleteFromTail(struct Node **head);
void deleteFromPos(struct Node **head, int position);
void printList(struct Node *head);
void deallocate(struct Node **head);

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void insertAtTail(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        // printf("struct Node data: %.10d", temp->data);
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(struct Node **head, int data, int position) {}

void deleteFromHead(struct Node **head) {}

void deleteFromTail(struct Node **head) {}
void deleteFromPos(struct Node **head, int position) {}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deallocate(struct Node **head)
{
    struct Node *temp = *head;
    while (temp != NULL) {
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
}

int main()
{
    struct Node *head = NULL;
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);

    insertAtTail(&head, 4);
    insertAtTail(&head, 5);
    printList(head);
    deallocate(&head);

    return 0;
}