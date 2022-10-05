#include <stdio.h> 
// program to find greatest among four numbers input by user
int main (){
    int a,b,c,d;
    printf("enter the four numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>=b && a>=c && a>=d)
    {
        printf("the graetest number is %d\n", a);
    }
    else if (b>=a && b>=c && b>=d)
    {
       printf("the greatest number is %d\n", b); 
    }
    else if (c>=a && c>=b && c>=d)
    {
        printf("the greatest number is %d", c); 
    }
    else if (d>=a && d>=b && d>=c)
    {
        printf("the greatest number is %d", d);
    }
    
    return 0;
}