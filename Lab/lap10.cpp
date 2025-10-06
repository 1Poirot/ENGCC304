#include <stdio.h>

int main() {
    char word[100];
    int i, j, len = 0;
    int check = 1;

    printf("Enter word: ");
    scanf("%s", word);

 
    for(i = 0; word[i] != '\0'; i++) {
        len++;
    }


    for(i = 0; i < len; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        }
    }

    i = 0;
    j = len - 1;

    while(i < j) {
        if(word[i] != word[j]) {
            check = 0;
            break;
        }
        i++;
        j--;
    }

    if(check == 1) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }

    return 0;
}