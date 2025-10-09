#include <stdio.h>

int main() {
    
    char ID[10];
    int hrs;
    float salary;
    
    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", ID);
    
    printf("Input the working hrs: \n");
    scanf("%d", &hrs);

    printf("Salary amount/hr: \n");
    scanf("%f", &salary);
    
    printf("Expected Output:\n");
    printf("Employees ID: %s\n", ID);
    printf("Salary = U$ %.2f\n", (float)hrs * salary);
    
     return 0;
}
