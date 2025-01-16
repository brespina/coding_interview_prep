/*
    stack implementation in c. 
        1. push operation, adding element to the top of the stack
        2. pop operation, removing the top element of the stack AND returns its value.
        3. getTop operation?

*/

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int* item;
    int top;
    int size;
} Stack;
void push(Stack *s, int val);
int pop(Stack *s);
void init(Stack *s, int size);
void deallocate(Stack *s);
void getTop(Stack *s);
// since we are in c, it is possible to index into memory not allocated for an array
// thus we must handle this and check if we were to push an element would we overflow into other memory?
void push(Stack *s, int val) {
    if(s->top == s->size -1) {
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

void init(Stack *s, int size) {
    s->top = -1;
    
    s->item = (int *) malloc(sizeof(int) * s->size);
    if(s->item == NULL) {
        printf("Unable to allocate memory\n");
        exit(1);
    }
    s->size = size;
}


void deallocate(Stack *s) {
    if(s->item != NULL)
        free(s->item);
}
void getTop(Stack *s) {
    printf("Top of stack: %d\n", s->item[s->top]);
}

int main() {
    Stack s1, s2;
    int popS1, popS2;

    init(&s1, 10);
    init(&s2, 20);
    push(&s1, 1);
    push(&s2, 2);

    getTop(&s1);
    getTop(&s2);

    push(&s1, 123);
    push(&s2, 369);

    getTop(&s1);
    getTop(&s2);
    popS1 = pop(&s1);
    popS2 = pop(&s2);

    printf("deleted from s1 : %d\n", popS1);
    printf("deleted from s2 : %d\n", popS2); 
    getTop(&s1);
    getTop(&s2);

    deallocate(&s1);
    deallocate(&s2);
    
    return 0;
}

