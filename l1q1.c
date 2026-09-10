/*calculation for mileage reimbursement */
#include<stdio.h>
#define ML 0.35
int
main(void){    
	double mileage,totalmile,startmile,endmile,milediff;  
   /*distance in miles*/	
   	printf("MILEAGE REIMBURSEMENT CALCULATOR/n");
	printf("enter the begining of the odometer reading");
	scanf("%lf",&startmile);
	printf("enter the ending of the odometer reading ");
	scanf("%lf",&endmile);
	milediff=endmile-startmile;
	totalmile=ML*milediff;
     printf("you travelled: %f miles. At $0.35 per mile",milediff );
	
		printf("your travell reimbursement is:%f",totalmile );
				
	return(0) ;
}

