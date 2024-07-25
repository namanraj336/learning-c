#include <stdio.h> 

int main (){
    int i=345;
    int *ptr=&i;
    int **ptr_ptr=&ptr;
    printf("%u\n", ptr);
    printf("%u", ptr_ptr);
    return 0;
}