#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int triangular(int l, int u);
main(){
	int lower,upper;
	int result;
	
	printf("entert he interval values\n");
	scanf("%d%d",&lower,&upper);
		
	result=triangular(lower,upper);
	printf(" result is %d\n",result);
	
	if(result==1)
		printf("they can construct a triangular.\n");
	if(result==0)
		printf("they can construct a triangular.");
	
}
int triangular(int l, int u){
	
	srand(time(NULL));
	
	int side1,side2,side3;
	
	side1=1+rand()%(u-l+1) ;
	side2=1+rand()%(u-l+1) ;
	side3=1+rand()%(u-l+1) ;
	
	printf("side1=%d \t side2=%d \t side3=%d \n",side1,side2,side3);
	
	if(side1+side2>=side3)
		return 1;
		
	else if(side2+side3>=side1)
		return 1;
	
	else if(side1+side3>=side2)
		return 1;
	
	else
		return 0;
	
}

