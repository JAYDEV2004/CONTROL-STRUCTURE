#include<stdio.h>
int main()
{
	int choice1,choice2,choice3,choice4,choice5,choice6;
	printf("WELCOME TO \n'BOAT AHEAD COMPANY COUSTOMER TELECOME SERVICE ");
	printf("\nCONTINUE TO FOR NEXT PROCESS PRESS 1 = ");
	printf("\nCHECK THE DELIVARY DETAILS press 2 =");
	printf("\nFOR THE CANCLE THE ORDER PRESS 3 =\n  ");
	printf("\nTO ANY OTHER PROBLEM CAN CALL TO A AGENT SO PRESS = 4\n");
	scanf("\n%d",&choice1);
	
	switch(choice1)
	{
		
	    case 1 :
	    printf("\n CHECK YOUR ORDER DETAILS PRESS 1 \n= ") ;
		scanf("\n%d",&choice2);
		printf("PRODUCT NAME : BOAT SMART RING GEN 1 \n MAX RETAIL PRICE : 8999/-\n QANTITY : 1");
		printf("\nCHOOSE YOUR LANGUAGE ");
		printf("\n (1)ENGLISH\n (2)HINDI\n (3)TAMIL\n (4)TELUGU\n (5)MARATHI\n (6)GUJARATI \n =");
		scanf("\n%d",&choice5);
		switch(choice5)
		{
		                case 1:
		        		printf("\n ENGLISH");
		        		break;
		        		
		        		case 2:
		        		printf("\n HINDI");
		        		break;
		        		
		        		case 3:
		        		printf("\n TAMIL");
		        		break;
		        		
		        		case 4:
		        		printf("\n TELUGU");
		        		break;
		        		
		        		case 5:
		        		printf("\n MARATHI");
		        		break;
		        		
		        		case 6:
		        		printf("\n GUJARATI");
		        		break;
		        	
		        			
		        		
		          }
		break;        
		      
		
		 
		case 2 :
	
	    printf("\nCHECK THE DELIVARY DETAILS press 2 \n=");
	    scanf("\n%d",&choice3);     		
		printf("\n ESTIMATE DELIVARY : 4DAYS\n DILIVARY STATUS   : DISPATCHED YOUR PRODUCT\n DILIVARY ADDRESS  : RED AND WHITE MULTIMEDIA EDUCATION, ROYAL ARCADE, SARTHANA JAKATNAKA, SURAT-395006\n DILIVARY PARTNER  : BLUEDART\n DILIVARY CONTACT  : +919191919191");
			  
		break;
		
		case 3 :
		printf("\nFOR THE CANCLE THE ORDER PRESS 3 = \n ");
		scanf("\n%d",&choice4);
		printf("\nYOUR ORDER WILL BE CANCLED AUTOMATICALY IN THE NEXT 48 HOURS.");
		printf("\nTHANKS FOR CALLING......");
		break;	
		
		case 4:
		        			printf("\nTO ANY OTHER PROBLEM CAN CALL TO A AGENT SO PRESS = 1");
		        		    scanf("\n%d",&choice6);
		        			switch(choice6)
		        		    {
		        			case 1 :
								printf("\nALL ARE THE AGENT ARE BUSY WAIT FOR SOME TIME OR CALL AFTER SOME TIME......THANKS FOR CALLING IN BOAT LIFESTYLE COMPANY....");
		        			   break;
		        			default :
							   printf("\nPELASE ENTER THE VALID INPUT");
							   break;  
						    }
					     break;
    
    
}

return 0;
}
    