#include <stdio.h>

int main() {
    int N;
    int i, j;
    int arr[100];
    int isPrime;

    printf("Enter N :\n");
    scanf("%d", &N);

  
    for(i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for(i = 0; i < N; i++) {
        printf(" %d ", i);
    }

    printf("\nArray: ");
    for(i = 0; i < N; i++) {
        if(arr[i] < 2) {
            isPrime = 0;
        } else {
            isPrime = 1;
            for(j = 2; j < arr[i]; j++) {
                if(arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 1) {
            printf("%d ", arr[i]);
        } else {
            printf("# ");
        }
    }

    return 0;
}