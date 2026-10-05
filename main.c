#include <stdio.h>

int main (int argc, char *argv[]) {
    int num;

    printf("Input an integer:");
    scanf("%i", &num);

    if (num >0)
    {
        printf("positive!\n");
    }
    else if (num < 0)
    {
        printf("negative!\n");
    }
    else
        printf("zero!\n");
    
    return 0;
}