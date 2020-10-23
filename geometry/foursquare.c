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

	printf("S=%0.3f", S);
	
	return S;
}

// поиск площади по его диоганали
int diagonal_area() 
{
	float S,d;

	printf("d: ");
	scanf("%f", &d);

	if(d<1)
	{
		printf("\nпо мне так нету смысла!\n");
		return 0;
	}

	S=(d*d)*0.5; //  1/2=0.5

	printf("S=%0.3f", S);
	
	return S;
}

int foursquare()
{
	printf("\t1. Поиск площади по его сторонам.\n");
	printf("\t2. Поиск площади по его диоганали.\n");

	int num;

	printf("\tВыберите пункт: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		side_area(); // поиск площади по сторонам квадрата
		break;
	case 2:
		diagonal_area(); // поиск площади по диоганали кводрата
		break;
	default:
		printf("Что то пошло не так =(\n");
	}

	return 0;
}

//foursquare_perimeter
