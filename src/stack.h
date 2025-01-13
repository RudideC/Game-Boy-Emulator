#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "config.h"

typedef struct {
    u_int8_t data[MAX_MEM];
    int top;
} Stack;

Stack *newStack(void) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (s != NULL) {
        s->top = -1;
    }
    return s;
}

int stackIsEmpty(Stack *s) {
    return s->top == -1;
}

int stackIsFull(Stack *s) {
    return s->top == MAX_MEM;
}

void stackPush(Stack *s, int value) {
    if (stackIsFull(s)) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++s->top] = value;
}

int stackPop(Stack *s) {
    if (stackIsEmpty(s)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return s->data[s->top--];
}

int stackPeek(Stack *s) {
    if (stackIsEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->data[s->top];
}

char *repeat_char(char c, int times) {
    if (times <= 0) return NULL;

    char *buffer = (char *)malloc(times + 1);
    if (!buffer) return NULL;

    memset(buffer, c, times);
    buffer[times] = '\0';

    return buffer;
}

void stackShow(Stack *s) {
    printf("|-------|\n");
    printf("| STACK |\n");
    for (int i = 0; i <= s->top; i++) {
        int spaces = 4;
        if (s->data[i] < 100) {spaces++;}
        if (s->data[i] < 10) {spaces++;}
        printf("|-------|\n");
        printf("|%d%s|\n", s->data[i], repeat_char(' ', spaces));
    }
    printf("|-------|\n");
}
