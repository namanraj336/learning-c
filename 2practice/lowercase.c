#include <stdio.h> 
// program to determine wether a chareacter is lowercase or not
int main (){
    char chara;
    printf(" enter the letter\n");
    scanf("%c", &chara);
    if (chara=='a' || chara=='b' || chara=='c' || chara=='d' || chara=='e' || chara=='f' || chara=='g' || chara=='h' || chara=='i' || chara=='j' || chara=='k' || chara=='l' || chara=='m' || chara=='n' || chara=='o' || chara=='p' || chara=='q' || chara=='r' || chara=='s' || chara=='t' || chara=='u' || chara=='v' || chara=='w' || chara=='x' || chara=='y' || chara=='z')
    {
        printf("%c is a lowercase character\n", chara);
    }
    else {
        printf("%c is not a lowercase character\n", chara);
    }
    return 0;
}