#include <stdio.h>

int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int n, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d numbers = %d\n", n, sum);

    return 0;
}
