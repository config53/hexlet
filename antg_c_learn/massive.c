#include <stdio.h>
#define SIZE 5
void func()
{
	int a = 10;
	int b = 20;
	int sum = b - a;
	printf("\n%d - %d = %d\n", b, a, sum);
}
void showMassiveAdressess(float mass[])
{
	printf("\n[*] show massive adressess: \n");

	printf("0: %p\n", &mass[0]);
	printf("1: %p\n", &mass[1]);
	printf("2: %p\n", &mass[2]);
	printf("3: %p\n", &mass[3]);
	printf("4: %p\n", &mass[4]);
	return;
}
int main(int argc, const char* argv[])
{
	float massive[SIZE] = {50.0, 150.0, 250.0, 300.0, 100.0};
	printf("\n%.2f\n", massive[0]); //вывод нулевого массива
	func(); //работа с функцией
	
	printf("\n[1]= %.2f\n", *(massive + 1)); //шаг +1 правильно записывать так
	
	printf("\n[4]= %.2f\n", *(massive + 4));// шаг +4 bytes
	
	size_t floatSize = sizeof(float);//находим размер типа флоат
	printf("\nfloat size = %zu bytes\n", floatSize);
	
	size_t longIntSize = sizeof(long int);
	printf("\nlong int size = %zu bytes\n", longIntSize);
	
	printf("\nmassive: %zu bytes", sizeof massive); //размер массива 
	
	showMassiveAdressess(massive); //функция адреса массива
	return (0);
}
