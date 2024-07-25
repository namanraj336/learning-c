#include <stdio.h> 
// program to determine wheather a student is passed or fail
int main (){
    int maths, physics, chemistry;
    
    printf("enter the marks in maths\n");
    scanf("%d", &maths);
    printf("enter the marks in physics\n");
    scanf("%d", &physics);
    printf("enter the marks in chemistry\n");
    scanf("%d", &chemistry);

    int total=maths+physics+chemistry;

    if(maths>32 && physics>32 && chemistry>32 && total>119){
        printf("pass\n");
        }
    else{
        printf("fail\n");
    }    
    return 0;
}