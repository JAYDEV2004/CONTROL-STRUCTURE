#include<stdio.h>

int main()
{
int a;
printf("ENTER THE VALUE : ");
scanf("%d",&a);
	
if(a>0)
{
printf("YOUR VALUE IS POSSITIVE");
}
else if(a<0)
{
printf("YOUR VALUE IS NEGETIVE");
}
else if(a==0)
{
printf("YOUR VALUE IS NEUTRAL");
}
return 0;
}
