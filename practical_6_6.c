#include <stdio.h>

int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        printf("%d ", i);
    }

    return 0;
}
