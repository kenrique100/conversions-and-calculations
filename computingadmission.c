//A c program to compute admission on a student based on marks
#include<stdio.h>

int main()
{
int maths, physics, chemistry, total, marks;//declaring variables
    printf("input the marks for mathematics,  physics and chemistry respectively:");//processing
    scanf("%d %d %d", &maths, &physics, &chemistry);
    total=maths+physics;
    marks=maths+physics+chemistry;
    printf("\ntotal marks=%d", total);
    printf("\n marks for maths n physics=%d", marks);
    if(total>=140, marks>=190)//candidate is admitted only if the condition is meet
    {
    printf("\nThe candidate is eligible ");
    }
    else
    {
    printf("\nThe candidate is not eligible for admission");
    }
    return 0;
}
