#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int number_of_guess=0;
    srand(time(NULL));
    printf("welecome to number guessing game: \n");
    random=rand()%100+1;
    do{
        printf("guess a number 1 and 100: ");
        scanf("%d",&guess);
        number_of_guess++;
        if (guess<random){
            printf("guess a larger number: \n");
        } else if (guess>random){
            printf("guess a smaller number: \n");
        } else {
            system("clear");
            printf("congratulations you have successfully made a correct guess in %d attempts: \n",number_of_guess);
        }
        }
        while(guess!=random);
        printf("Thanks For Playing!!!\n");
        printf("Developed By Sameer\n");

    
    return 0;
}