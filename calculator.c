/*A c program to simulate a simple calculator using switch case*/
#include<stdio.h>
#include<conio.h>

int main()
{
	/*declaraing variables*/
   float a,b,result=0;
    char ch;
    /*processing*/
    printf("Enter value for a:");
    scanf("%f",&a);
    printf("\nChoose operation to perform(+,-,*,/,mod): ");
    scanf("%c",&ch);
    printf("\nEnter value of b:");
    scanf("%f",&b);
    
    
    switch(ch)
    {
    case'+':
    result=a+b;
    break;
    case'-':
    result=a-b;
    break;
    case'*':
    result=a*b;
    break;
    case'/':
    result=a/b;
    break;
    default:
    printf("\nInvalid operation:");
    }
    printf("\nresult of %d %c %d =%.2f", a,ch,b,result);
    
    return 0;
}
