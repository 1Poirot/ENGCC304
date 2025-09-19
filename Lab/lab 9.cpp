#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, i;
    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[100]; // กำหนดขนาดพอประมาณ

    for (i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (i = 0; i < N; i++) {
        printf("%d", i);
        if (i != N - 1) printf("  ");
    }
    printf("\n");

    printf("Array: ");
    for (i = 0; i < N; i++) {
        if (isPrime(arr[i]))
            printf("%d", arr[i]);
        else 
            printf("#");
        if (i != N - 1) printf("  ");
    }
    printf("\n");

    return 0;
}