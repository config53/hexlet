#include <stdio.h>

void aphavit()
{
	char a = 'a';
	char z = 'z';

	while(a <= z)
	{
		printf("%c ", a);
		a++;
	}
	printf("\n");
}

void alpha()
{
	char a = 'a';
	char z = 'z';
	
	while(a <= z)
	{
		printf("%c ", z);
		z--;
	}
	printf("\n");
}

int main(int argc, const char* argv[])
{
	aphavit();
	alpha();
	int i,o,p;
	i = 58;
	o = 61;
	p = 41;
	printf("%c%c%c\n",i, o, p);
	short a = 1;
	printf("%d\n", a);
	return (0);
}
