#include <stdio.h>
struct student {
    char studentName[50];
    int student;
    int studentID;
    float scienceGrade, mathgrade, englishgrade;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].studentID = i + 1;
        printf("\nstudent %d,\n", s[i].studentID);
        printf("Enter student name: ");
        scanf("%s", s[i].studentName);
        printf("student ID: ");
        scanf("%d", s[i].studentID);
        printf("Enter Science grade: ");
        scanf("%f", &s[i].scienceGrade);
        printf("Enter Math grade: ");
        scanf("%f", &s[i].mathgrade);
        printf("Enter English Grade: ");
        scanf("%f", &s[i].englishgrade);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("Student name: ");
        puts(s[i].studentName);
        printf("student ID");
        puts(s[i].studentID);
        printf("science: %.1f",s[1].scienceGrade);
        printf("math: %.1f",s[1].mathgrade);
        printf("english: %.1f", s[1].englishgrade);
        printf("\n");
    }
    return 0;
}

