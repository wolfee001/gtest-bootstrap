#include "something.h"

int op(int a, int b, int op)
{
    if (op == 1) {
        return a + b;
    }
    if (op == 2) {
        return a * b;
    }
    return 0;
}