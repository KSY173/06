#include <stdio.h>
#include <stdlib.h>

int sumtwo(int a, int b)
{
	int sum = a + b;
	return(sum);
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{	
	int res_sum, res_square, res_get_max;
	
	res_sum = sumtwo(2,3);
	res_square = square(5);
	res_get_max = get_max(10, -20);
	
	printf("%i %i %i", res_sum, res_square, res_get_max);
	
	return 0;
}
