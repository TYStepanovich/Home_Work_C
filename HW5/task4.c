/*
 * task4.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * 
 * B11 ДЗ 5
Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д. 

Данные на входе:		Целое неотрицательное число 
Данные на выходе:	Целое неотрицательное число наоборот 

Пример №1
Данные на входе:		1234 
Данные на выходе:	4321 

Пример №2
Данные на входе:		782 
Данные на выходе:	287 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, c, d=0;
    scanf("%d", &a);
    while(a != 0) {
        c = a%10;
        a /= 10;
        d = d*10+c;
    }
    printf ("%d\n", d);

	return 0;
}

