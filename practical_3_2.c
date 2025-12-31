#include <stdio.h>
int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
