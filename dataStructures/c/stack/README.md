# Stack Data Structure in C

## Overview

A **stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. This means that the last element added to the stack will be the first one to be removed. Stacks are commonly used in various applications such as parsing expressions, backtracking algorithms, and managing function calls in programming languages.

### Key Operations on a Stack

1. **Push**: Adds an element to the top of the stack.
2. **Pop**: Removes and returns the top element from the stack.
3. **Peek (or Top)**: Returns the top element without removing it.
4. **IsEmpty**: Checks if the stack is empty.
5. **IsFull**: Checks if the stack is full (in case of a fixed-size stack).

### Implementation in C

Below is a simple implementation of a stack in C using an array.

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define the stack structure
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop from an empty stack\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}

// Function to peek at the top element of the stack
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty, cannot peek\n");
        exit(EXIT_FAILURE);
    }
    return s->items[s->top];
}

// Function to display the stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(&s);

    printf("Top element: %d\n", peek(&s));

    printf("Popped element: %d\n", pop(&s));
    display(&s);

    return 0;
}
