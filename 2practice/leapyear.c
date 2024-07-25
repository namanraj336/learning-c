#include <stdio.h> 
// program to determine wether a year is leap year or not
int main (){
    int year;
    printf("enter the year\n", year);
    scanf("%d", &year);
    if (year%4==0)
    {
        printf("%d is a leap year\n", year);
    }
    else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}