/*

	Та же задача на вычисления целсия 
	Используется цикл FOR
*/

#include <stdio.h>

main()
{
	float fahr;//, celcius;
//	float lower, upper, step;
	printf("CEL | FA\n");

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	
		printf("%3.1f : %.1f\n", fahr, (5.0 / 9.0) * (fahr -32.0) );
		
	
}
