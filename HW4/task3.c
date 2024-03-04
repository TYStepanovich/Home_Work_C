#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int n, a, b, c, max;
	printf("Please enter three-digit number\n");
	scanf( "%d", &n) ;
    a = n/100;
    b = n/10%10;
    c = n%10;
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("%d\n", max);
	return 0;

}

