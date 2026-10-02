#include<stdio.h>
int main()
{
	int marks;
	char grade;
	printf(" enter marks:");
	scanf("%d",&marks);
	 grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' :
            (marks >= 50) ? 'E' :'F'; 
            
            		printf("grade=%c\n",grade);
            	
				switch(grade){
			
				
				
 
 case 'A':
 printf("Excellent Work");
 break;
 case 'B':
 printf("well done");
  break;
 
 case 'C':
 printf("good job");
  break;
 case 'D':
 printf("passed");
  break;
 case 'E':
 	printf("pass");
 	 break;
 	case 'F':
 		printf("sorry you failed");
 		break;
 	}
 		if(marks>70)
  printf("\nyour selected for the next level");
    else
  printf("\ntry for next time") ;  
  return 0; 
      	
      	

		
		
}
//input:Enter Marks:85
//output:Grade B
//output:well done
//output:your selected for the level 



 
     	

		
		


