/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int isPrime (int num) {
    if ( num < 2 ) return 0;
    for ( int i = 2; i <= sqrt(num); i++) {
        if ( num % i == 0 ) return 0;
        
    }
    return 1;
    
}

int main() {
    int n;
    printf ("Enter N : ");
    scanf( "%d" ,&n);
    
    int arr[n]; 
    for(int i = 0; i < n; i++) {
    printf("Enter value[%d] : ", i );
    scanf("%d", &arr [i] );
    
     }

    printf("Index:  ");
    for (int i = 0; i < n;i++)
    
    {
        printf("%2d ", i);
    } 
    
    printf("\n");
    printf("Array:  ");
    for( int i=0 ; i < n; i++ )
    
    {  
        
    if (isPrime(arr[i]))
        printf("%2d ", arr[i]); 
    else
       printf("%2s ", "#"); 
       
    }
    
    printf("\n");
    
    return 0;
        
}