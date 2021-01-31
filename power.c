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
	
	
	
	//NOT: ^ bunu kullanabilmen için double tip bir þey olmamalý, int tipinde olmalý.
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
