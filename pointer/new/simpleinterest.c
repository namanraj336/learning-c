#include <stdio.h> 

int main ()
{
    int x, j;
    printf("\n");
    for ( x=4;  x>= 1; x--)
    {
        for (j = 1; j <= x; j++)
        {
            printf("%8d", x);
        }
        printf("\n");
    }
    return 0;
}