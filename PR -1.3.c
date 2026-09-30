#include<stdio.h>
int main()
{
	int first_angle,second_angle,third_angle;
	printf("enter the first angle:");
	scanf("%d",&first_angle);
		printf("enter the second angle:");
	scanf("%d",&second_angle);
	third_angle=180-first_angle - second_angle;
	
	printf("third angle =%d",third_angle);
	
	return 0;
	
	
}
//INPUT:FIRST ANGLE:70,SECOND ANGLE:80
//OUTPUT:THIRD ANGLE:30
