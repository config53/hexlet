#include <stdio.h>
#define SIZE 4
int main(int argc, const char* argv[])
{
	int con[SIZE] = {100, 200, 300, 400};
	int i = 0;
	while(i < SIZE)
	{
		printf("%d\n", con[i]);
		i++;
	}
	return 0;
}
