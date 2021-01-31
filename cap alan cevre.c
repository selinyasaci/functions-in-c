#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
double getCircumference(double c);
int getDiameter(int a);
double getArea(double b);

main(){
	srand(time(NULL));
	double radius;
	int dia,circ,area; // burada tanýmladýðýn þeye dikkat et.
	
	radius=rand()%11;
	printf("radius=%lf\n",radius);
	
	dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function
    
	printf("Diameter of the circle = %d units\n", dia);
    printf("Circumference of the circle = %d units\n", circ);
    printf("Area of the circle = %d sq. units", area);
	
}
int getDiameter(int a){
	
	// diameter çap demek.
	return 2*a;
}
double getCircumference(double a){
	// çevre

	return (2*M_PI*a);
	
}
double getArea(double a){
	//alan
	return (M_PI*a*a);
}
