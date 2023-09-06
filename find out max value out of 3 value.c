#include<stdio.h>

int main()

{
	int x,y,z;
	printf("enter the first value  A = ");
	scanf("%d",&x);
	printf("enter the second value B = ");
	scanf("%d",&y);
	printf("enter the third value  C = ");
	scanf("%d",&z);

	if(x>y)
	{
		if(x>z)
		{
			printf("A is max");
		}
		else
		{
			printf("B is max");
		}
	}
	else
	{
		if(y>z)
		{
			printf("B is max");
		}
		else
		{
			printf("C is max");
		}
	}
}

