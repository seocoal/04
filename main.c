#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c,d;
	printf("input seconds : ");
	
	scanf("%i", &a);
	b=a/3600;
	
	int e=a % 3600;
	c= e/60;
	d= e%60;
	
	printf("%i second is %i:%i:%i. \n", a,b,c,d);
	
	
	
	return 0;
}
