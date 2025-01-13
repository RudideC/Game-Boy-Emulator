#include "stack.h"

int main(void) {
    Stack *s = newStack();

    stackPush(s, 24);
    stackPush(s, 24);

    stackPop(s);
    stackPop(s);

    stackShow(s);
    free(s);
}
