#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void dotProduct(int l, int u);
main(){
	
	int lower,upper;
	
	printf("enter the lower and upper values\n");
	scanf("%d%d",&lower,&upper);
	
	dotProduct(lower,upper);
	
	
	
	
}
void dotProduct(int l, int u){
	
	srand(time(NULL));
	int a1,a2,b1,b2,product;
		
	a1= 1+rand()%(u-l+1);
	a2= 1+rand()%(u-l+1);
	b1= 1+rand()%(u-l+1);	
	b2= 1+rand()%(u-l+1);	
	
	printf("a1 is equal to %d\n a2 is equal to %d\n b1 is equal to %d\n b2 is equal to %d\n ",a1,a2,b1,b2);
	
	product=a1*b1+a2*b2;
	
	printf("%d",product);
	
}
