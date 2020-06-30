#include <stdio.h>

void printString(const char * hello)
{
	printf("end operations: %s\n", hello);
	return;
}

void printcity(void)
{
	const char * printcity[] = {"Kazan", "Moscow", "Baku", "Turkey", "USA", "Europa"};
	printf("%s\n", printcity[0]);
	return;
}

void prlean(void)
{
	const char * prlean [] = {"C", "C++", "Java", "python", "SQL"};
	printf("%s\n", prlean [0]);
	printf("%s\n", prlean [1]);
	return;
}
int main(int argc, const char* argv[])
{
	char hello1[] = {'h', 'e', 'l', 'l', 'o', '1'};
	printf("%s\n", hello1); //один способ записи строк
	
	char hello2[] = "hello2";
	printf("%s\n", hello2); //2й способ записи строк, анлогично первой записи
	
	const char * hello3 = "hello3";
	printf("%s\n", hello3); // константа hello3 не изменна и изменить не получиться

	hello1[0] = 'H'; // измения 0го элемента массива на большую букву
	printf("%s\n", hello1);
	
	/*	обьявления адраса *//*
	const char * hello1 = "hello1";
	const char * hello2 = "hello2";
	printf("h1: %p\n", hello1);
	printf("h2: %p\n", hello2);
	hello1 = hello2;
	printf("h1: %p\n", hello1);
	printf("h2: %p\n", hello2);
	*/
	
	printString(hello1);
	printcity();
	prlean();
	return 0;
}
