/*to calculate the area of a circle */
#include<stdio.h>
#define PI 3.14
int
main(void){    
	double radius,area;     /*radius of circle*/	
	printf("please enter the radius of the circle");
	scanf("%lf",&radius);
	area=PI*radius*radius;
		printf("the area of the circle is: %lf",area);
		return(0) ;


}
