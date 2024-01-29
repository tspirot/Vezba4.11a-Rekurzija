// Vezba4.11a.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rekurzivne funkcije
#include <stdio.h>
int rekurzija(int n)
{
	printf("%d ", n);
	if (n < 10)
		return n + rekurzija(n + 1);
	printf("%d ", n);
}
int main()
{
	rekurzija(1);
	return 0;
}
