#include "stack.c"

int main() {
    Stack *s = newStack();

    stackPush(s, 24);

    // stackPop(&s);

    stackShow(s);
    free(s);
}