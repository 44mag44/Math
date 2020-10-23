#include <stdio.h>

#include "h/foursquare.h"

int main()
{
	printf("***Меню***\n");
	printf("- 1. Квадрат\n");

	int num=0;

	printf("Выберите пункт: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1: foursquare(); // квадрат
		break;
	default: 
		printf("Что то пошло не так =(\n");
	}

	return 0;
}
