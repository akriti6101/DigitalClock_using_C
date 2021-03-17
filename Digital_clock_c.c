#include<stdio.h>
#include<stdlib.h>
#define CLRSCR system("cls");
int main()
{
	int h,s,m;
	double i;
	printf("Enter the time in the format: HH : MM :SS ");
	scanf("%d%d%d",&h,&m,&s);
	


	
	start:
	
		for(h;h<24;h++)
		{
			for(m;m<60;m++)
			{
				for(s;s<60;s++)
				{CLRSCR;
					
						printf("****Digital clock *****\n\n");
	               printf("\n\n\nDate : '6'th JANUARY 1999' \n");
	                   printf("TIME :");
					printf("\t %d : %d :%d ",h,m,s);
					if(h<12)
					   printf(" AM");
					   else
					     printf("PM");
					for( i=0;i<61258785;i++)
					   i++;
					   
				}
				s=0;
			}
			m=0;
		}
		h=0;
		goto start;
	
		
	
}
