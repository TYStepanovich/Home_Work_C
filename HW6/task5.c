/*
 * task5.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 *C11 ДЗ 
НОД
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
int nod(int a, int b)
Данные на входе: 		Два целых положительных числа 
Данные на выходе: 	Одно целое число - наибольший общий делитель. 

Пример №1
Данные на входе: 		14 21 
Данные на выходе: 	7 

 */


#include <stdio.h>

int nod(int a, int b) {
    while (a > 0 && b > 0) {
        if(a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

int main(int argc, char **argv)
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));
    return 0;
}

