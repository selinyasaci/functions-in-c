#include<stdio.h>
main(){
	
	int num;
	int result;
	int rvs;
	
	printf("enter the number");
	scanf("%d",&num);

	rvs=reverse(num);
	
	printf("the number=% of reverse is %d",num,rvs);
	
	
	
}
int reverse (int n){	//function header

	int r,remainder;
	
	while(n!=0){
		remainder=n%10;		// for the reverse of the function
		r=r*10+remainder;
		n=n/10;
		
	}
	
	return r;
	
}
