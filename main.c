#include <stdio.h>
#include <stdlib.h>

void func(void)
{
	int x;
	printf("func x is at %p\n", &x);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int x;
	printf("main x is at %p\n", &x);
	func();
	
	return 0;
}
