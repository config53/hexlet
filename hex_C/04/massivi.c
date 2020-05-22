#include <stdio.h>

int main(int argc, const char* argv[])
{
	int arr[4];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	int i, sum;
	sum = 0;
	i = 0;

	while(i < 4)
	{
		sum = sum + arr[i];
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
