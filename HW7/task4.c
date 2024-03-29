/*
 * task4.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * 
 * D11 ДЗ 3
Количество 1
Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. 
Данные на входе: 		Натуральное число 
Данные на выходе: 	Целое число - количество единиц в двоичной записи числа. 

Пример №1
Данные на входе: 		5 
Данные на выходе: 	2 

Пример №2
Данные на входе: 		255 
Данные на выходе: 	8 

 */


#include <stdio.h>

int units(int n) {
    static int a = 0;
    if(n != 0) {
       a += n % 2;
       units(n / 2); 
    }
    return a;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", units(n));
    return 0;
}

