#include<stdio.h>
/*calculating the area of a circle*/
int main()
{
	/*declaring variables*/
	float r,area;
	 /*processing*/
	 
	 printf("Enter radius of circle:");
	 scanf("%f",&r);
	 
	 /*area of circle*/
	 
     area=3.14*r*r;
     
     printf("\nThe area of the circle=%f",area);
     return 0;
 }


