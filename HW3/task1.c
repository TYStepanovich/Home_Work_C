#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c; //Объявить переменные
	printf("Input number:\n"); //Вывести на экран подсказку
	scanf ("%d%d%d", &a, &b, &c); //Считать три целых числа и записать их по адресу a,b,c
	printf("%d + %d + %d = %d\n", a, b, c, a+b+c); //Вывести на экран значение a+b+c
	return 0; //Завершить программу успешно
}

