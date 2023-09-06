#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	if(a<b)// FOR A EXAMPLE 100<200
	{
		printf("THIS VALUE IS MINIMUM : %d",a); 
	}
	else //  FOR A EXAMPLE 100<99 
	{
		printf("THIS VALUE IS MINIMUM : %d",b);
	}
	return 0;
}
