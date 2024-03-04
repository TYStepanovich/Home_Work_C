#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b; //Объявить переменные
	printf("Input number:\n"); //Вывести на экран подсказку
	scanf ("%d%d", &a, &b); //Считать два целых числа и записать их по адресу a,b
	printf("%d", a-b); //Вывести на экран значение a-b
	return 0; //Завершить программу успешно
}

