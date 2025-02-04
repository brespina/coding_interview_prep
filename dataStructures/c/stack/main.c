#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
	int *arr;
	int size;
	int top;
} stack;

// function prototypes
void init(stack *s, int size);
void push(stack *s, int val);
void pop(stack *s);
void peek(stack *s);
bool isFull(stack *s);
bool isEmpty(stack *s);

void init(stack *s, int size) {
	s->top = -1;
	s->size = size;
	s->arr = (int *)malloc(size * sizeof(int));
}

void push(stack *s, int val) {

}

int main() {
	stack s1, s2;


	return 0;
}

