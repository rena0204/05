#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("Input an integer:");
	scanf("%d", &x);
	
	if(x>0)
	printf("�� �� �� �� ��.\n");
	else if(x<0)
	printf("�� �� �� �� ��.\n");
	else
	printf("0�� �� ��.\n"); 
		
	return 0;
}
