#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int num;

    printf("Input an integer:");
    scanf("%i", &num);

    if (num >0)
        printf("Absolute value : %d!\n", num);
    else
        printf("Absolute value : %d!\n", -num);
    
    return 0;
}