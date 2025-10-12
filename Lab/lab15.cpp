#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;
    int count = 0;   
    int inWord = 0;   

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r"); 
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; 
        } else if (inWord == 0) {
            inWord = 1; 
            count++;
        }
    }

    fclose(file);

    printf("Total number of words in '%s' : %d words\n", filename, count);

    return 0;
}
