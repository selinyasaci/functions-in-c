#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void midPoint(int sV, int sF );
main(){
	int shift_value, scaling_factor;
	
	printf("enter the shift value and scaling factor");
	scanf("%d%d",&shift_value,&scaling_factor);
	
	midPoint(shift_value,scaling_factor);
	
	
}
void midPoint(int sV, int sF ){
	
	srand(time(NULL));
	int m1,m2;
	int a1,a2,b1,b2;
	
	a1=sV+rand()%sF;
	a2=sV+rand()%sF;
	b1=sV+rand()%sF;
	b2=sV+rand()%sF;
	
	printf("a1 is equal to %d\n a2 is equal to %d\n b1 is equal to %d\n b2 is equal to %d\n ",a1,a2,b1,b2);
	
	
	m1=(a1+b1)/2;
	m2=(a2+b2)/2;
		
	printf("m1 is equal to %d, m2 is equal to %d",m1,m2);
	
}
