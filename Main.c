#include<stdio.h>
#include<string.h>
#include "Data_validate.c"
int main()
{
	int choice,k,l,choose,select;
	char a[50];
	int n;
	printf("Enter Which query you want to execute\n");
	printf("1.Data type\n 2.Range\n 3.Length\n 4.Format\n 5.Perfect number\n");
	scanf("%d",&choice);
	switch(choice)
	  {
		case 1:
			
	                  printf("Enter 1.A string\n 2.exit\n");
			  scanf("%d",&choose); 
	                  switch(choose)
				{
				  case 1:printf("enter a string\n");
				         scanf("%s",a);
					 l=strlen(a);
					 printf("1.check integer\n 2.check float\n 3.check character\n 4.check string\n");
					 scanf("%d",&select);
					  switch(select)
						{
						  case 1:k=isinteger(a,l);
							 if(k==1)
							     printf("this is a integer\n");	
							  else
							     printf("this is not an integer\n"); 
							  break;	
						  case 2:k=isfloat(a,l);
							 if(k==1)
							     printf("this a float\n");
	
							  else
							     printf("this is not a float\n");
							  break;
						  case 3:k=character(a,l);
							if(k==1)
							     printf("this is a character\n");	
							  else
							     printf("this is not a character\n");
							break;	
						  case 4:k=string(a,l);
							  if(k==1)
							     printf("this is a string\n");	
							  else
							     printf("this is not a string\n");
							 break;

						  default:printf("wrong choice\n");
							  break;
						}
						break;
				  case 2:printf("terminated\n");
					 break;
				  default:printf("wrong choice\n");
					  break;				
				}
			        break;	
			     
			case 2:
				   printf("enter month\n");
				   scanf("%s",a);
				   k=range(a);
				if(k==1)
				    printf("in range\n");	
				 else
				    printf("not in range\n"); 
				break;
			case 3:printf("Enter mobile no:");
				scanf("%s",a);
				k=length(a);
				if(k==1)
				    printf("This is a mobile number\n");	
				 else
				    printf("This is not a mobile number\n"); 
				break;
			case 4:printf("Enter date in the format(DD/MM/YYYY):");
				scanf("%s",a);
				k=format(a);
				if(k==1)
				    printf("Valid\n");	
				 else
				    printf("Invalid\n"); 
				break;
			case 5:printf("enter a perfect number\n");
				   scanf("%d",&n);
				   k=perfect_no(n);
				   if(k==1)
				    printf("This is a perfect number\n");	
				 else
				    printf("This is not a perfect number\n"); 
				break;
			default:printf("wrong choice\n");
				break;
                       }
	return 0;
}
				 
		 
		
						  
				 
		
							   
		
