#include <stdio.h> 

int main (){
    int d;
    printf("enter the number \n");
    scanf("%d", &d);
    int i=1;
    do
    {
        if (d>0)
        {
            printf("%d\n", i);
            i++;
        }
        else
        {
            printf("there is no natural number before %d", d);
        }
        
    } while (i<d);
    
    return 0;
}