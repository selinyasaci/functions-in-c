#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
	
	int lower,upper;
	printf("enter the lower and upper limit\n");
	scanf("%d%d",&lower,&upper);
	
	strongNumbers(lower,upper);
	
	
	
	
}

void strongNumbers(int start, int end){
	
	int num;
	int rem;
	int sum;
	
	while(start!=end){
		
		sum=0;
		num=start; // bunları burada tanımlamak gerekiyor.
		
		while(num!=0){
			rem=num%10;
			int f=fact(rem); // burayı böyle yap.
			sum=sum+f;
			num=num/10;
		}
	if(start==sum){
		printf("%d, ",start);
	}
	start++;
	}
	
}
int fact(int num){
	int i;
	int factorial=1;
	for(i=1; i<=num ;i++){
		factorial=factorial*i;
	}
	return factorial;
	
}

