/*
 * task1.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * C3 Практ 1
Среднее арифметическое чисел
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)
Данные на входе: 		Два целых неотрицательных числа 
Данные на выходе: 	Одно целое число 

Пример №1
Данные на входе: 		5 7 
Данные на выходе: 	6 

Пример №2
Данные на входе: 		10 20 
Данные на выходе: 	15 

 */


#include <stdio.h>

int middle(int a, int b) {
	int aver;
    aver = (a + b)/2;
	return aver;
}
int main(int argc, char **argv)
{
	int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", middle(a, b));
    
	return 0;
}
