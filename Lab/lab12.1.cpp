#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};

char *calGrade(float score) {
    if (score >= 80)
        return "A";
    else if (score >= 75)
        return "B+";
    else if (score >= 70)
        return "B";
    else if (score >= 65)
        return "C+";
    else if (score >= 60)
        return "C";
    else if (score >= 55)
        return "D+";
    else if (score >= 50)
        return "D";
    else
        return "F";
}

int main() {
    struct Student s[3];
    int i;
    float avg;

    printf("Enter the details of 3 students :\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name:\n");
        scanf(" %[^\n]", s[i].Name);
        printf("ID:\n");
        scanf("%s", s[i].ID);
        printf("Scores in Subject 1:\n");
        scanf("%f", &s[i].ScoreSub1);
        printf("Scores in Subject 2:\n");
        scanf("%f", &s[i].ScoreSub2);
        printf("Scores in Subject 3:\n");
        scanf("%f", &s[i].ScoreSub3);
        printf("Scores in Subject 4:\n");
        scanf("%f", &s[i].ScoreSub4);
        printf("Scores in Subject 5:\n");
        scanf("%f", &s[i].ScoreSub5);
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        
        printf("Name: %s\n", s[i].Name);
        
        printf("ID: %s\n", s[i].ID);
        
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
        
               s[i].ScoreSub1, s[i].ScoreSub2, s[i].ScoreSub3,
               s[i].ScoreSub4, s[i].ScoreSub5);
               
        printf("Grades: %s %s %s %s %s\n",
               calGrade(s[i].ScoreSub1),
               calGrade(s[i].ScoreSub2),
               calGrade(s[i].ScoreSub3),
               calGrade(s[i].ScoreSub4),
               calGrade(s[i].ScoreSub5));
        avg = (s[i].ScoreSub1 + s[i].ScoreSub2 + s[i].ScoreSub3 +
               s[i].ScoreSub4 + s[i].ScoreSub5) / 5;
        printf("Average Scores: %.1f\n\n", avg);
    }

    return 0;
}
