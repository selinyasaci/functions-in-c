#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int n1,int n2);
main(){
	int num1,num2;
	
	srand(time(NULL));
	num1=5+rand()%5;
	num2=5+rand()%5;
	
	printf("num1=%d\nnum2=%d\n",num1,num2);
	
	int result=max(num1,num2);
	
	printf("maximum is equal to %d",result);
	
	
	
}
int max(int n1,int n2){
	
	if(n1>n2)
		return n1;
	else
		return n2;
	
	
	
}
