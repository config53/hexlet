/*
	Формула для вычисления цельсия (примитивная)
	С = (5/9) * (F - 32)
*/

#include <stdio.h>

int main(int argc, const char* argv[])
{
	float fahr, celcius;
	float lower, upper, step;
	
	lower = 0;	//min value 
	upper = 300;	//max value
	step = 20;	// step + 20
		
	fahr = lower;
	printf(" Ce   | Fa\n");
	
	while(fahr <= upper)
	{		
		celcius = (5.0 / 9.0) *(fahr - 32.0);
		printf("%5.1f : %.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	return (0);	
}
