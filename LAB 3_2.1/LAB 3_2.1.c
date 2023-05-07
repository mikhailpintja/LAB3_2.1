// Lab3_2(part1).c: В якому квадранті лежить задана крапка з координатами (х,у).//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

int main()
{
	int x, y;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть координати крапки в форматi P(x,y) \n");
	printf("\t x= ");
	scanf("%d", &x);
	printf("\t y= ");
	scanf("%d", &y);
	if (x > 0 && y > 0) printf("\n Крапка з координатами Р (%d,%d) лежить в I-(першому) квадрантi. \n", x, y);
	else if (x < 0 && y > 0) printf("\n Крапка з координатами Р (%d,%d) лежить в II-(другому) квадрантi. \n", x, y);
	else if (x < 0 && y < 0) printf("\n Крапка з координатами Р (%d,%d) лежить в III-(третьому) квадрантi. \n", x, y);
	else if (x > 0 && y < 0) printf("\n Крапка з координатами Р (%d,%d) лежить в IV-(четвертому) квадрантi. \n", x, y);
	else printf("\n Крапка з координатами Р (%d,%d) лежить в центрі координат\n", x, y);

	int getch(); getch();
	return 0;
}
