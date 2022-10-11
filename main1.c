#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int factorial(int n)
{
	int i;
	int res = 1;
	for(i=1; i<=n; i++)
		res = res * i;
	return res;
}

int get_integer()
{
	int n;
	printf("input number :");
	scanf("%d", &n);
	return(n);
}

int main(void)
{	
	int a, b;
	
	a = get_integer();
	b = get_integer();
	
	printf("C(%d, %d) = %d", a, b, combination(a,b));
	return 0;
}

