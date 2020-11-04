#include<stdio.h>
int main() 
{
	int choice,choice2,n,i;
	float wt,fat,fr,fp;
	printf("########### DAIRY CALCULATOR ###########");
	printf("\n\n Fat rate is 6 and Bonus is 4 per Kg\n");
	while(2){
	float sum=0;	
	printf("\nEnter the choice:\n");
	printf("1.Update Fat rate and Bonus\n");
	printf("2.Skip and proceed to Calculations\n");
	scanf("%d",&choice);
	switch(choice) 
	{ 
	
		case 1:
		     { 
				printf("Enter Fat rate and Bonus:");
				scanf("%f %f",&fr,&fp);
				printf("Fat rate and Bonus updated successfully\n");
				printf("Press 1 for proceed to Calculations\nPress 2 for Exit\n");
				scanf("%d",&choice2);
				switch(choice2)
		        { 
			        case 1:
				      { 
						printf("Enter number of innings\n");
						scanf("%d",&n);
						printf("Enter Milk weight and Fat for %d days\n",n);
						for(i=0;i<n; ++i)
						{ 
							scanf("%f %f",&wt,&fat);
							sum+= (fat*fr+fp)*wt;
						}
						printf("Total amount for %d days is %.2f\n\n",n,sum);
						break; 
					  }
					case 2: 
			    	  { 
						break;
			    	  } 
				}
				break; 
			 }  
		case 2:
		 	 {
				printf("Enter the number of innings\n");
				scanf("%d",&n);
				printf("Enter Milk weight and Fat for %d days\n",n);
				for(i=0;i<n;++i)
				{
					scanf("%f %f",&wt,&fat);
					sum+= (fat*6+4)*wt;
				}
				printf("Total amount for %d days is %.2f\n\n",n,sum);
					break; 
		     }
		default :
		 	 {
		 		printf("Invalid choice!");
		 		break;
			 }
	}
            }  
} 

