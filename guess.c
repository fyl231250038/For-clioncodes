#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int entering_number,the_number,high;
    int chance=7;
    printf("Let us play a game\n"
           "enter a number as the upper limit:");
    scanf("%d",&high);
    the_number=rand()%high+1;
    printf("let us begin\n");
    while (chance>0) {
    printf("you have %d chance,enter a number here:",chance);
    scanf("%d", &entering_number);
        if (entering_number < the_number)
            printf("larger!\n");
        else if (entering_number > the_number)
            printf("smaller!\n");
        else{
            printf("you win!\n");
            break;}
        chance-=1;
    }
    if(chance==0)
        printf("you lose!");
}