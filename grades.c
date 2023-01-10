#include<stdio.h>

int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nGrade = ");
    if(avg>=91 && avg<=100)
        printf("1");
    else if(avg>=81 && avg<91)
        printf("2");
    else if(avg>=71 && avg<81)
        printf("3");
    else if(avg>=61 && avg<71)
        printf("4");
    else if(avg>=51 && avg<61)
        printf("5");
    else
        printf("Invalid!");

    return 0;
}