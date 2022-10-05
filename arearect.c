#include <stdio.h>
// enter lenght and braedth of a rectangle and print the area
int main()
{
    // take two variable as lenght and braeadth
    int l, b;
    // input the lenght
    printf("enter the lenght of rectangle \n");
    scanf("%d", &l);
    // input the braedth
    printf("enter the breadth of rectangle \n");
    scanf("%d", &b);
    // print the area
    printf("the area of the reactangle is %d \n", l * b);
    // return the program successfully
    return 0;
}