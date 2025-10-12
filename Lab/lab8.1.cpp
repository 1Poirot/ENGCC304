#include <stdio.h>

int main() {

    int position;     
    int years;        
    int projects;     
    float salary;     
    float bonus;     
    float extra;      
    float total;      

    printf("Job position (1=Junior, 2=Mid, 3=Senior): ");
    scanf("%d", &position);

    printf("Number of years worked  : ");
    scanf("%d", &years);

    printf("Number of completed projects : ");
    scanf("%d", &projects);

    if(position == 1){
        salary = 20000;
    }else if(position == 2){
        salary = 35000;
    }else if(position == 3){
        salary = 50000;
    }

    if(years < 1){
        bonus = 0;
    }else if(years >= 1 && years <= 3){
        bonus = salary * 0.10;
    }else if(years >= 4 && years <= 5){
        bonus = salary * 0.15;
    }else{ 
        bonus = salary * 0.20;
    }
    if(projects > 5){
        extra = salary * 0.05;
    }else{
        extra = 0;
    }

    total = salary + bonus + extra;

    
    printf("\n........................\n");
    printf("salary = %.2f baht\n", salary);
    printf("Bonus based on length of service = %.2f baht\n", bonus);
    printf("Special Bonus = %.2f baht\n", extra);
    printf("net salary = %.2f baht\n", total);

    return 0;
}
