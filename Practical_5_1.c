#include <stdio.h>
int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
