#include <stdio.h>

int main(int argc, const char* argv[])
{
	float fahr, cel;
	printf("Введите температуру С^: \n");
	scanf("%f", &cel);
	printf("Cel\tFahr\n");
	
	fahr = (cel * 1.8 + 32);
	printf("%3.1f : \t%.1f\n", cel, fahr);
	return (0);
}
		
