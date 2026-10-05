#include<stdio.h>
int main()
{
	int n,digits=0;
	printf("enter the number :");
	scanf("%d",&n);
	 while(n != 0)
	 {
	 
	 n = n / 10;
    digits++;
}
    printf("total digits=%d",digits);
    return 0;
}