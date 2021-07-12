#include<stdio.h>
void main()
{
	int a;
	printf("Randomly Choose A number Between 1-5 And i will tell you what to eat: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("FOOD ITEM: BIRIYANI\nPRICE: Rs 75");
			break;
		case 2:
			printf("FOOD: ITEM: PASTA\nPRICE: Rs 80");
			break;
		case 3:
			printf("FOOD: ITEM: PIZZA\nPRICE: Rs 120");
			break;
		case 4:
			printf("FOOD: ITEM: MAGGI\nPRICE: Rs 10");
			break;
		case 5:
			printf("FOOD: ITEM: CHOWMEIN\nPRICE: Rs 85");
			break;
		default:
			printf("INVALID!! %d is not between 1 and 5",a);
			
	}
}
