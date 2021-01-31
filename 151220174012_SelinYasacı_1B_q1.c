#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void calculate(double x, int N);
int factorial(int term); // function prototype
main(){
	
	int angle,terms;
	
	printf("enter the angle in degrees and number of terms N\n ");
	scanf("%d%d",&angle,&terms);
	
	double x=angle*M_PI/180;
	printf("x is equal to %d",x);
	
	int fact=factorial(terms);
	
	calculate(x,fact);		 // calling the function
	
}
void calculate(double x, int N){
	
	// ýt doesn't return anything.
	int i;
	int ans;
	int sum=0;
	int cnt=1;
	
	//for the (x^n)/n!
	for(i=1;i<=N;i+=2){
		
		ans=pow(x,i)/N;
		cnt++;
		if(cnt%2==0){
			sum=sum-ans;
		}
		else{
			sum=sum+ans;
		}
		
		int result=sin(x*M_PI/180);
		printf("sin(x)= %d\n",result);


		printf("app_sin(x)=%d\n",sum);
		
	}
	
	
	
}
int factorial(int term){
	
	int i;
	int fact=1;
	for(i=1;i<term;i++){
		fact=fact*i;
	}
	
	return fact;
	
}


   













