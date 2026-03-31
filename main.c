#include <stdio.h>

int isEven(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number))
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}