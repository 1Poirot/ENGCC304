#include <stdio.h>

int main() {
    int num, temp, digit, i, power;
    int count = 0, sum = 0 ;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

  
    while(temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;


    while(temp != 0) {
        digit = temp % 10;

        power = 1;
        for(i = 0; i < count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == num) {
        printf("Pass.\n");
    } 
    else {
        printf("Not Pass.\n");
    }

    return 0;
}
