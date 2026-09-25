#include <stdio.h>

int main() {
    int a, b, sum, average;

    printf("Enter the value of first variable \n");
    scanf("%d", &a);

    printf("Enter the value of the second variable \n");
    scanf("%d", &b);

    sum = a + b;
    average = sum / 2;

    printf("The sum of the variables is = %d\n", sum);
    printf("The average between the two numbers is %d\n", average);

    return 0;
}