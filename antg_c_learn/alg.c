#include <stdio.h>

int main(int argc, const char* argv[])
{
	int a = 10;
	int b = 20;
	int c;
	printf("%d, %d\n",a, b);
	
	c = a;
	a = b;
	b = c;
	
	printf("%d, %d\n\n",a, b);
	
	int x = 10;
	int y = 20;
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d, %d",x , y);
return 0;
}
