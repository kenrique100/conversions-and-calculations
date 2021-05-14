//a c programm to compute a geometric fig using functions
#include<stdio.h>
char inro();
void compute(char);
void assign();
int main()
{
	assign();
	return 0;
}
char intro()
{
	char fig_code;
	printf("Hello\n");
	printf("select the letter\n");
	printf("-rectangle(r)\n");
	printf("-square(s)\n");
	printf("-circle(c)\n");
	scanf("%c",&fig_code);
	return fig_code;
	}
	void assign()
	{
		char p;
		p=intro();
		compute(p);
	}
	
void compute(char fig_code)
{
		switch(fig_code)
	{
		float side,length,width,area,perimeter,radius,r,s,c;
		case 'r':
			printf("Enter the  length and width:");
			scanf("%f %f",&length,&width);
			area=length*width;
			perimeter=2*(length+width);
			printf("Area of a rectangle=%.2f\n",area);
			printf("Perimter of a rectangle=%.2f",perimeter);
			break;
		case 's':
			printf("Enter side:");
			scanf("%f",&side);
			area=side*side;
			perimeter=4*side;
			printf("Area of a square=%.2f\n",area);
			printf("Perimter of a square=%.2f",perimeter);
			break;
		case 'c':
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
}

	
