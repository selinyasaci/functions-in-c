#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);
main(){
	
	int number;
	srand(time(NULL));
	
	number=100+rand()%100;
	printf("num is equal to %d\n",number);
	
	if(isPrime(number))
		printf(" this number is prime\n");
	else
		printf(" this number is not prime\n");
	
	if(isArmstrong(number))
		printf(" this number is armstrong\n");	
	else{
		printf(" this number is not armstrong\n");
	}
		
	
	if(isPerfect(number)){
		printf("this number is perfect\n");
	}
	else
		printf("this number is not perfect\n");	
	
}
int isPrime(int num){
	int i;
	int sayac;
	for(i=2;i<num;i++){
		if(num%i==0){
			sayac++;
		}
	}
	if(sayac==0)
		return 1;
	else
		return 0;
	
	
}
int isArmstrong(int num){
	int i;
	int rem;
	int sum=0;
	int temp=num;
	
	while(num!=0){
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
		
	}
	
	return(sum==temp);

}
int isPerfect(int num){
	int i;
	int sum=0;
	int temp=num;
	
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	
	if(sum==temp)
		return 1;
	else
		return 0;
}





