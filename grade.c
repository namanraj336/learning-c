#include <stdio.h>
// program to give grade on the basis of marks
int main()
{
    int marks;
    printf("enter the marks of the student\n");
    scanf("%d", &marks);
    if (marks > 90)
    {
        printf("A grade\n");
    }
    else if (marks > 80)
    {
        printf("B grade\n");
    }
    else if (marks > 70)
    {
        printf("C grade\n");
    }
    else if (marks > 60)
    {
        printf("D grade\n");
    }
    else
    {
        printf("F grade\n");
    }
    return 0;
}