/*
 * task4.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * 
 *C9 Практ 2
Факториал
Составить функцию вычисления N!. Использовать ее при вычислении факториала
int factorial(int n)

Данные на входе: 		Целое положительное число не больше 20 
Данные на выходе: 	Целое положительное число 

Пример №1
Данные на входе: 		5 
Данные на выходе: 	120 
 */


#include <stdio.h>

int factorial(int n) {
	if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int a = 1;
    for(int i = 2; i <= n; i++) {
        a *= i;
    }
    return a;
}

int main(int argc, char **argv)
{
	int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
	return 0;
}

