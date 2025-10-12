#include <stdio.h>

int main() {
    int a, b, c;
    int sum;

    printf("Enter  3 number : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    printf("answer = %d \n", sum);

    return 0;
}