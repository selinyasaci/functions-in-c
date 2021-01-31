#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
	int lower,upper;
	printf("enter the lower and upper limit\n");
	scanf("%d%d",&lower,&upper);
	
	
	armstrong(lower,upper);
	
	
	
}
void armstrong(int start, int end){
	
	while(start<=end){
			int num=start;
			int sum=0;
		while(num!=0){
			
			int rem=num%10;
			sum=sum+pow(rem,3);
			num=num/10;
			
			
		}
		if(start==sum){
			printf("%d is armstrong\n",sum);
		}
		start++;
	}
	
	
	
}
