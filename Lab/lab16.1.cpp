#include <stdio.h>

int main() {
    int arr[] = { 15, 7, 25, 3, 73, 32, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int pos32 = -1;

    
    printf("Old Series : ");
    for(i = 0; i < n; i++) {
        if(i > 0) printf(", ");
        printf("%d", arr[i]);
    }
    printf("\n");

   
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

 
    printf("New Series : ");
    for(i = 0; i < n; i++) {
        if(i > 0) printf(", ");
        printf("%d", arr[i]);
        if(arr[i] == 32) pos32 = i;
    }
    printf("\n");

  
    printf("Pos of 32 : %d\n", pos32);

    return 0;
}
