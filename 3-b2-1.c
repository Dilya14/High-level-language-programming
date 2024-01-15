/*2056011 计科 李书瑶*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter an integer between[1..30000]: \n");
	int num;
	scanf("%d", &num);

	int a, b, c, d, e;

	a = num / 10000;
	b = (num / 1000) % 10;
	c = (num / 100) % 10;
	d = (num / 10) % 10;
	e = num % 10;

	printf("Ten of Thousands: %d \n", a);
	printf("Thousands:        %d \n", b);
	printf("Hundreds:         %d \n", c);
	printf("Tens              %d \n", d);
	printf("Units:            %d \n", e);

	return 0;
}