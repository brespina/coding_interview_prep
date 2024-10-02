/*
    stack implementation in c. 
        1. push operation, adding element to the top of the stack
        2. pop operation, removing the top element of the stack AND returns its value.
        3. getTop operation?

*/

#include <stdio.h>
#define SIZE 10

typedef struct {
    int item[SIZE];
    int top;
} Stack;

// since we are in c, it is possible to index into memory not allocated for an array
// thus we must handle this and check if we were to push an element would we overflow into other memory?
void push(Stack *s, int val) {
    if(s->top == SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->item[s->top] = val;

};
int pop(Stack *s) {
    if(s->top == -1) {
        printf("Stack underflow\n");
        return -9999;  // since pop is declared as int. we still must return an integer.
    }

    int topVal = s->item[s->top];
    s->top--;

    return topVal;
};

void init(Stack *s) {
    s->top = -1;
}

int main() {
    Stack s1, s2;
    int popS1, popS2;

    init(&s1);
    init(&s2);
    push(&s1, 1);
    push(&s2, 2);
    push(&s1, 123);
    push(&s2, 369);

    popS1 = pop(&s1);
    popS2 = pop(&s2);

    printf("deleted from s1 : %d\n", popS1);
    printf("deleted from s2 : %d\n", popS2); 

    
    return 0;
}

