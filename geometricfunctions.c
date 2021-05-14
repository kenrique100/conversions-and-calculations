//program to compute shapes of a geometric fig
#include<stdio.h>
void compute( char fig_code);
int main()
{
	int fig_code;
	float side,length,width,area,perimeter,radius;
	printf("------------------------------------------------\n");
	printf("1-Area and perimeter of a rectangle\n");
	printf("2-Area and parimeter of a square\n");
	printf("3-Area and parimter of a circle\n");
	printf("-------------------------------------------------\n");
	printf("Enter the figure code:");
	scanf("%d",&fig_code);
	switch(fig_code)
	{
		case 1:
			printf("Enter the  length and width:");
			scanf("%f %f",&length,&width);
			area=length*width;
			perimeter=2*(length+width);
			printf("Area of a rectangle=%.2f\n",area);
			printf("Perimter of a rectangle=%.2f",perimeter);
			break;
		case 2:
			printf("Enter side:");
			scanf("%f",&side);
			area=side*side;
			perimeter=4*side;
			printf("Area of a square=%.2f\n",area);
			printf("Perimter of a square=%.2f",perimeter);
			break;
		case 3:
		    printf("Enter the radius:");
		    scanf("%f",&radius);
		    area=3.14*radius*radius;
		    perimeter=2*3.14*radius;
		    printf("Area of circle=%.2f\n",area);
		    printf("Perimter of a circle=%.2f",perimeter);
		    break;
	default:
		printf("invalid figure code\n");
		break;
	}
	return 0;
}
	
