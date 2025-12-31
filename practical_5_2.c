#include <stdio.h>
int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int a, b, c;
    printf("Enter thre numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Max = %d\n", a);
    else if (b > c)
        printf("Max = %d\n", b);
    else
        printf("Max = %d\n", c);

    return 0;
}
