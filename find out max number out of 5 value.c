#include<stdio.h>

int main()

{
	int x,y,z,w,v;// a=x b=y c=z d=w //
	printf("enter the first value  A = ");
	scanf("%d",&x);
	printf("enter the second value B = ");
	scanf("%d",&y);
	printf("enter the third value  C = ");
	scanf("%d",&z);
	printf("enter the fourth value D = ");
	scanf("%d",&w);
	printf("enter the fifth value  E = ");
	scanf("%d",&v);
	// a=x b=y c=z d=w //

	if(x>y) //a>b//
	{
		if(x>z) //a>c//
		{
			if(x>w)//a>d//
			{
				if(x>v) //a>e// 
				{
				printf("MAXIMUN A = %d",x);
			    }
			    else
			    {
			    	printf("MAXIMUM E = %d",v);
				}
			}
			else
			{
				printf("MAXIMUN D = %d",w);
			}
	    }
	    else
	    { if(z>w)//c>d//
			{
				if(z>v)
				{
					printf("MAXIMUN C = %d",z); // z=c//
				}
				else
				{
					printf("MAXIMUM E = %d",v);  // v=e//
				}
				
			}
			else
			{
				printf("MAXIMUN D = %d",w);  //d//
			}
		}
    }
    else
    {   
	    if(y>z) // b>c //
       
	   {   
	      if(y>w)  // b>d //
	     {
	     	if(y>v)
	     	{
	     	printf("MAXIMUM B = %d",y);  //y=b //
	        }
	        else
	        {
	        	printf("MAXIMUM E = %d",v);  // v=e //
			}
		 }
	     else
	     { 
		    printf("MAXIMUM D = %d",w);
		 }
	    
	   }
	   else
	   {  
	       if(w>z)
	       {
	       	if(w>v)
	       	{
	     	printf("MAXIMUM D =%d",w);
	        }
	        else
	        {
	            printf("MAXIMUM E = %d",v);
			}
		   }
		   else
		   {
		 	printf("MAXIMUM C =%d",z);
		   }
		
	   }
	}
}
