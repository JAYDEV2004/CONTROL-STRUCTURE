#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE FIRST  VALUE =");
	scanf("%d",&a);
	printf("ENTER THE SECOND VALUE =");
	scanf("%d",&b);
	(a>b)? printf("a IS MAX = %d",a)
	     : printf("b IS MAX = %d",b);
	
	int A,B,C;
	printf("\n\nENTER THE FIRST  VALUE =");
	scanf("%d",&A);
	printf("ENTER THE SECOND VALUE =");
	scanf("%d",&B);
	printf("ENTER THE THIRD  VALUE =");
	scanf("%d",&C);
	(A>B)? (A>C) ? printf("a IS MAX = %d",A): printf("c IS MAX =% d",C)
	     : (B>C) ? printf("b IS MAX = %d",B) : printf("c IS MAX = %d",C);
	     
	int A1,A2,A3,A4;
	printf("\n\nENTER THE FIRST  VALUE =");
	scanf("%d",&A1);
	printf("ENTER THE SECOND VALUE =");
	scanf("%d",&A2);
	printf("ENTER THE THIRD  VALUE =");
	scanf("%d",&A3);
	printf("ENTER THE FORUTH  VALUE =");
	scanf("%d",&A4);
	(A1>A2) ? (A1>A3) ? (A1>A4) ? printf(" a is max %d",A1) : printf(" d is max %d",A4) : printf(" c is max %d",A3) : (A2>A3) ? (A2>A4) ? printf(" b is max %d",A2) : printf(" d is max %d",A4) : (A3>A4) ? printf("c is max %d",A3) : printf(" d is max %d",A4);
	
	
	int a1,a2,a3,a4,a5;
	
	printf("\n\nENTER THE FIRST  VALUE =");
	scanf("%d",&a1);
	printf("ENTER THE SECOND  VALUE =");
	scanf("%d",&a2);
	printf("ENTER THE THIRD   VALUE =");
	scanf("%d",&a3);
	printf("ENTER THE FORUTH  VALUE =");
	scanf("%d",&a4);
	printf("ENTER THE FIFTH   VALUE =");
	scanf("%d",&a5);
	
	(a1>a2) ? (a1>a3) ? (a1>a4) ? (a1>a5) ? printf(" a is max %d",a1) : printf(" e is max %d",a5): printf(" d is max %d",a4) : printf(" c is max %d",a3) 
	: (a2>a3) ? (a2>a4) ? (a2>a5) ? printf(" b is max %d",a2) : printf(" e is max %d",a5) : printf(" d is max %d",a4) 
	  : (a3>a4) ? (a3>a5) ? printf("c is max %d",a3): printf(" e is max %d",a5) 
	    : (a4>a5) ? printf(" d is max %d",a4) : printf(" e is max %d",a5);
}