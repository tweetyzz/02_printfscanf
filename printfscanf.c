#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inInt;
	float inFloat;
	
	printf("input an integer : ");
	scanf("%d",&inInt);
	
	printf("input an float :");
	scanf("%d",&inFloat);
	
	printf("integer : %i, float : %f\n", inInt, inFloat);
	
	return 0;
}
