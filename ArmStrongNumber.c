#include<stdio.h>

int numberOfDigits(int num);
int ArmstrongNumber(int numb,int dig);
main(){
	int num;
	int NOD;
	
	printf("enter the number");
	scanf("%d",&num);
	
	NOD=numberOfDigits(num);
	printf("nod=%d\n",NOD);
	
	if( ArmstrongNumber(num,NOD))
		printf("the number is an armstrong number");
	else
		printf("the number is not an armstrong number");

	
}
int numberOfDigits(int num){
	
	int d;
	while(num!=0){
		
		d++;
		num=num/10;
	}
	
	return d;
	
}

int ArmstrongNumber(int numb,int dig){
	
	int rem,sum=0,org=numb; // burada orjinali tutmamız lazım.
	
	while(numb!=0){
		rem=numb%10;
		sum=sum+pow(rem,dig);
		numb=numb/10;
	}
	
	if(sum==org)
		return 1;
	else
		return 0;
	

	
}









