#include<stdio.h>

int
main(void){    
	int temperature;  
	double kelvin;
	kelvin=(5/9)*(temperature-32)+273.15;
  	printf("enter the temperature in farenheit ");
  		scanf("%lf",&temperature);
   	
   			
   
	printf("the temperature in  kelvin is %f",kelvin);
	
	
					return(0) ;
}
