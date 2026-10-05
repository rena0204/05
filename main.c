#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int answer = 59;
    int input;
    int trial = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%i", &input);

        if (answer < input) 
            printf("high!\n");
        else if (answer > input) 
            printf("low!\n");

        trial++;
    } while (answer != input);
    
    printf("Congratulations! trial:%i\n", trial);

    return 0;
}