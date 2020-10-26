/* FOURSQUARE_C */
#include <stdio.h>

// поиск площади по его сторонам
int side_area() 
{
	float S,a;

	printf("a: ");
	scanf("%f", &a);

	if(a<1)
	{
		printf("\nпо мне так нету смысла!\n");
		return 0;
	}

	S=a*a; // формула 

	printf("S=%0.3f\n", S);
	
	return S;
}

// квадрат
int foursquare()
{
	printf("\t1. Поиск площади по его сторонам.\n");

	int num;

	printf("\tВыберите пункт: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		side_area(); // поиск площади по сторонам квадрата
		break;
	default:
		printf("Что то пошло не так =(\n");
	}

	return 0;
}

//foursquare_perimeter
