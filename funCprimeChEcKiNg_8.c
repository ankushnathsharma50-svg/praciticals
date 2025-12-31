#include <stdio.h>

//Function to check Prime Number //
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to calculate Factorial //
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to swap using Pass by Reference //
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("ankush nath sharma\n");
    printf("ERP :- 11809\n");

    int num, a, b;

    /* Prime check */
    printf("\nEnter number for prime check: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is Prime Number\n", num);
    else
        printf("%d is Not Prime Number\n", num);

    /* Factorial */
    printf("\nEnter number for factorial: ");
    scanf("%d", &num);
    printf("Factorial = %d\n", factorial(num));

    /* Swap using pass by reference */
    printf("\nEnter two numbers for swapping: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After Swapping: a = %d , b = %d\n", a, b);

    return 0;
}
