#include <stdio.h>

int main() {
    int N, i; 

    printf("Enter number: ");
    if (scanf("%d", &N) != 1) {
        printf("Please enter the number !\n");
        return 0;
    }

    if (N % 2 == 0) {
        printf("%d Even numbers\n", N);
        for (i = N; i >= 0; i = i - 1) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } else {
        printf("%d odd number\n", N);
        for (i = 1; i <= N; i = i + 1) {
            if (i % 2 == 1) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
