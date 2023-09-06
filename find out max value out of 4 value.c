#include<stdio.h>

int main()

{
	int x,y,z,w;// a=x b=y c=z d=w //
	printf("enter the first value  A = ");
	scanf("%d",&x);
	printf("enter the second value B = ");
	scanf("%d",&y);
	printf("enter the third value  C = ");
	scanf("%d",&z);
	printf("enter the fourth value D = ");
	scanf("%d",&w);
	
	// a=x b=y c=z d=w //

	if(x>y) //a>b//
	{
		if(x>z) //a>c//
		{
			if(x>w)//a>d//
			{
				printf("MAXIMUN A = %d",x);
			}
			else
			{
				printf("MAXIMUN D = %d",w);
			}
	    }
	    else
	    { if(z>w)//c>d//
			{
				printf("MAXIMUN C = %d",z); // c//
			}
			else
			{
				printf("MAXIMUN D = %d",w);  //d//
			}
		}
    }
    else
    {   if(y>z) // b>c //
       
	   {  if(y>w)  // b>d //
	     {  printf("MAXIMUM B = %d",y);
	     }
	     else
	     {  printf("MAXIMUM D = %d",w);
		 }
	    
	   }
	   else
	   {  if(z>w)
	       {
	     	printf("MAXIMUM C =%d",z);
		   }
		   else
		   {
		 	printf("MAXIMUM D =%d",w);
		   }
		
	   }
	}
}
