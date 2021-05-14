#include<stdio.h>
int main()
{
	int num,count,ch,result;
	printf("Enter a positive number:");
	scanf("%d",&num);
	printf("---------------------------------------------\n");
	printf("1-Multiplication (*)\n");
	printf("2-Addition (+)\n");
	printf("---------------------------------------------\n");
	printf("Enter table code:");
	scanf("%d",&ch);
	printf("\nMultiplication table is:\n",result);
	printf("\nAddition table is:\n",result);
	  switch(ch)			
	{
		case 1:
			for(count=1;count<=10;count++)
			printf("%d * %d = %d\n",num,count,result);
			result=num*count;
		  	break;
		case 2:
			for(count=1;count<=10;count++)
			printf("%d + %d = %d\n",num,count,result);
			result=num+count;
			break;
		default:
			printf("Invalid figure code\n");
		}
return 0;
}
