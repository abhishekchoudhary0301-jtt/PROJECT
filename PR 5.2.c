#include <stdio.h>

int main()
{
    int arr[9] = {2,7,1,3,5,4,8,9,6};
    int i;
    int largest=arr[0];

   
    
    for(i = 0; i < 9; i++)
    {
    
        
        	if( arr[i]>largest)
        	{
        		largest=arr[i];
			}}
			printf("Largest number = %d\n", largest);
           

    return 0;
}