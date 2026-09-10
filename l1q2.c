/*calculation for mileage reimbursement */
#include<stdio.h>
#define G 9.80
#define EC .90
#define MC 1000
int
main(void){    
	double mass,power,height,flow;  
  	mass= flow*MC;
   		printf("enter the height ");
   			scanf("%lf",&height);
   			printf("enter the floww ");
   			scanf("%lf",&flow);
   			
   	power=((mass*G*height)/1e6)*EC;
	printf("the work done is:%lf in megawatts ",power);
	
	
				
	return(0) ;
}
