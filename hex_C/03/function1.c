#include <stdio.h>

int power(int, int);

int main(int argc,const char* argv[])
{
	printf("%d", power(2 , 10));
	return 0;
}
int power(int base, int n)
{
	int i, p;
	p = 1;
	
	for(i = 1; i <= n; ++i);
	p = p * base;
	return p;
}
