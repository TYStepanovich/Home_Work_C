#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c; //Объявить переменные
	printf("Input number:\n"); //Вывести на экран подсказку
	scanf ("%d%d%d", &a, &b, &c); //Считать три целых числа и записать их по адресу a,b,c
	printf( "%.2f\n",  (a+b+c)/3. );//Вывести на экран значение в формате %.2f\n
	return 0; //Завершить программу успешно
}

