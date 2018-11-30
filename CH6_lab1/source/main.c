#include<stdio.h>
#include<stdlib.h>
#include"information.h"
void main(void)
{
	Person P;

	printf("Please input your name: ");
	scanf_s("%s", P.name,8);
	//gets(&P.name);
	printf("Please input your gender(0 for woman,1 for man): ");
	scanf_s("%d", &P.gender);
	printf("Please input your age: ");
	scanf_s("%d", &P.age);
	printf("\nhi!%s.", P.name);
	if (P.gender == 0)
	{
		printf("you are a %d woman", P.age);
	}
	{
		printf("you are a %d man", P.age);
	}
	system("pause");
}