#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//double power(double base, int exponent);
main(){
	
	int x;
	double y;
	printf("enter the x and y value");
	scanf("%d%lf",&x,&y);
	
	double result=func(x,y);
	
	 printf("%lf",result);	
	
	
	
	//NOT: ^ bunu kullanabilmen i�in double tip bir �ey olmamal�, int tipinde olmal�.
}
double func (double x, double y){
	
	if(y==0){
		return 1;
	}
	
	else if(y>0){
		return x*pow(x,(y-1));
	}
	
	else{
		return 1/pow(x,-y);
	}
	
}
