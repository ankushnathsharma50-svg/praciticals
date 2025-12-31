#include <stdio.h>

/* Pass by Value function */
int squareValue(int n) {
    n = n * n;
    return n;
}

int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int a = 5;
    int result;

    result = squareValue(a);

    printf("Square (Pass by Value) = %d\n", result);
    printf("Original value of a = %d\n", a);

    return 0;
}
