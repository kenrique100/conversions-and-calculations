#include<stdio.h>/*calculating time zones Awah Kenrique HND L1 hitbamas*/

int main()
{
/*declaring variables*/
int hours, hours2,  mins, secs;
char colon;
hours=02;
hours2=hours+2;
mins=24;
secs=30;
colon=':';
/*processing*/
printf("American time :\n%i%c%i%c%i", hours, colon, mins, colon, secs);
printf("\nEuropean time:\n%i%c%i%c%i", hours2, colon, mins, colon, secs);
    return 0;
}