#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main (){
    int random, guess, nguess;
    srand(time(0));
    random=rand()%100+1;
    printf("enter your guess \n");
    scanf("%d", &guess);
    if(random==guess)
    {
        printf("congratulations, you are the chosen one because you have guessed correct in the very first attempt \n ");
    }
    for(nguess=2;guess!=random;nguess++)
    {
        if(guess>random)
        {
            printf("lower number please \n");
        }
        else if (guess<random)
        {
            printf("higher number please \n");
        }
        else if(nguess>20)
        {
            printf("you have excedded the maximum number of attempts");
            break;
        }
        printf("enter your guess \n");
        scanf("%d", &guess);
    }
    if(guess==random)
    {
        printf("you have guessed correct in %d attempts \n", nguess-1);
    }
    return 0;
}