
#include<string.h>
#include<stdio.h>
#include "Data_validate.h"

int isinteger(char a[],int l)
{
      int i,count=0;
 
     for(i=0;i<l;i++)
      {
          if(a[i]>='0' && a[i]<='9')
          count++;
      }
     if(count==l)
     return 1;
     else
     return 0;
 }
int isfloat(char a[],int l)
{
	 int dot,flag,count,i;
	 count=dot=flag=0;
	     
			if(a[l-1]=='.')
				flag=0;
			else
			{
	            for(i=0;i<l;i++)
	             {
		          if(a[i]>='0' && a[i]<='9')
		           count++;
			else if(a[i]=='.')
				dot++;
				else ;	            
			}
	           	if((dot==0&&count==l)||(dot==1&&count==l-1))
				flag=1;
			else
				flag=0;
			}
	return flag;
}
int character(char a[],int l)
{
    if(l!=1)  //character should be one
       { printf("a character should be one\n"); return 0;}
   else 
   {
      if((a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='z'))	//check that user input a character
        return 1;
    else
       return 0;
 	}
}
int string(char a[],int l)
{
      int i,count=0;
           for(i=0;i<l;i++)
	     {
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='z'))
		      count++;
		  }
        if(count==l)
	          return 1;
	    else
	           return 0;
  }
int range(char month[ ])
{
			 
	    int l,count,i,n,flag;
			count=0;
		    	l=strlen(month);
            		if(l!=2)
               			flag=0;
            		else 
            		{
		     		for(i=0;i<2;i++)
                      		{
            	           		if(month[i]>='0' && month[i]<='9')
           	           			count++;
				}  
		
                   		if(count==2)
                        		flag=1;
                     		else
		         		flag=0;
		 		n=atoi(month);
		     		if(n>=1 && n<=12)	
                         		 flag=1;
                    		else 
                        		flag=0;
            
               		  }
   	      if(flag==1)
   		return 1;
	    else
		return 0;
 }
int length(char a[ ])
{	    
                int i,l,count=0,g;
        	l=strlen(a);	
                              if(l!=10)    
					g=0;
				else if(a[0]==0)
					g=0;

				else
				{
					for(i=0;i<10;i++)
	    				{
						if(a[i]>='0' && a[i]<='9') 
		 				count++;
		 			}
		 			if(count==10)
		 		        	
						g=1;
		 			else
		 			  
						g=0;
		 		}
	   			
		if(g==1)
			return 1;
		else
			return 0;
		
}
int format(char a[])
{
        int count,l,i,j;
	char DD[2];
	char MM[2];
	char YYYY[4];
		
		count=0;
			       l=strlen(a);
				  if(l!=10)
					return 0;
				   else if(a[2]!='/' && a[5]!='/')
			             	return 0;
			        for(i=0;i<10;i++)
			       {
			       	   if(a[i]>='0' && a[i]<='9')
			       	   count++;
				   }
				    if(count!=8)
				     return 0;
				   
			       for(i=0;i<2;i++)
					DD[i]=a[i];
			       DD[i]='\0';
				for(i=0,j=3;i<2 && j<5;i++,j++)
				    	 MM[i]=a[j];
				MM[i]='\0';
				for(i=0,j=6;i<4 && j<10;i++,j++)
					  YYYY[i]=a[j];
				YYYY[i]='\0';
				int day=atoi(DD);
				int month=atoi(MM);
				int year=atoi(YYYY);
				if((month<1 || month>12)&&(year<1996||year>2050))	
					return 0;
					
					//1.jan 2.feb-------- 12.dec
					else
					{
						switch (month)
					{
						case 01://january
						case 03://march
						case 05://may
						case 07://july
						case 8://august
						case 10://october
						case 12://december
							if(day<1 || day>31)
								return 0;
								break;
						case 04://april
						case 06://june
						case 9://september
						case 11://november
						    if(day<1 || day>30)
								return 0;
								break;	
						case 02:if(isleap(year))
								{
										if(day<1||day>29)
										return 0;
								}
								else
								{
										if(day<1||day>28)
										return 0;
								}
							break;
						
			
						}
			}
			return 1;
		
			}
int isleap(int year)
{
	if(year%400==0)
		return 1;
	else if(year%100==0)
		return 0;
	else if(year%4==0)
		return 1;
	else
		return 0;
}

int perfect_no(int n)
{
	
	int sum,i=1;
	   
	   sum=0;
	   while(i<n)
       {	  
		  if((n%i)==0)
               sum=sum+i;
        i++;
      }
     
       if(sum==n)
           return 1;
      else
          return 0;
    	
}

