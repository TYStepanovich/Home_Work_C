/*
 * task5.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * 
 * D20 ДЗ
Возвести в степень
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.

Данные на входе: 		Два целых положительных числа
Данные на выходе: 	Одно целое число n в степени p

Пример №1
Данные на входе: 		2 3
Данные на выходе: 	8

Пример №2
Данные на входе: 		3 4
Данные на выходе: 	81
 
 */


#include <stdio.h>

int recurs_power(int n, int p) {
    static int a = 1;
    if(p > 1) {
        recurs_power(n, --p);
    }
    a *= n;
    return a;
}

int main(int argc, char **argv)
{
    int n;
    int p;
    scanf("%d %d", &n, &p);
    printf("%d", recurs_power(n, p));
    return 0;
}

