/*calculation for mileage reimbursement */
#include<stdio.h>

int
main(void){    
	double t,temperature;  
  	printf("enter the time period of the power failure  ");
  		scanf("%lf",&t);
   		temperature=((4*t*t)/(t+2))-20;
   			
   
	printf("the temperature in celsius is %f ",temperature);
	
	
				
	return(0) ;
}
