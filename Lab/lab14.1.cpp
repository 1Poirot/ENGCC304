#include <stdio.h>

int main() {
    int arr[100];  
    int n = 0;     
    int num;

    printf("Enter value:\n");

    
    while(scanf("%d", &num) == 1) {
        arr[n] = num;
        n++;
        if(n >= 100) break; 
    }


    printf("Index: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");


    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    int min = arr[0];
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Min : %d\n", min);
    printf("Max : %d\n", max);

    return 0;
}
