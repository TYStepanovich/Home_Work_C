/*
 * task2.c
 * 
 * Copyright 2024 Юрий <Юрий@LAPTOP-8KU9E73U>
 * 
 * B4 Урок 5 ДЗ 2
Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры. 

Данные на входе:		Целое положительное число 
Данные на выходе:	Одно слово: YES или NO 

Пример №1
Данные на входе:		123 
Данные на выходе:	YES 

Пример №2
Данные на входе:		1234 
Данные на выходе:	NO 

 * 
 * 
 */


#include <stdio.h>

int main()
{ 
	int a, x = 0; 
    scanf("%d", &a);
    while(a != 0) {
        a /= 10;
        x++;   
    }

    switch (x) {
        case 3:
            printf (" YES \n");
        break;
        default :
            printf (" NO \n");
    }

	return 0;
}
