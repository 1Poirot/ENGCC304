#include <stdio.h>

int main() {
    char ID[11];
    int hours;
    double rate;
    double salary;

    printf("Enter employee code (not more than 10 characters): ");
    scanf("%10s", ID);

    printf("Enter the number of hours worked: ");
    scanf("%d", &hours);

    printf("Enter the hourly wage : ");
    scanf("%lf", &rate);

    salary = hours * rate;

    printf("\nEmployee ID = %s\n", ID);
    printf("salary = U$ %.2f \n", salary);

    return 0;
}