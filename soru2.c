#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int geoMean(int l, int u);
main(){
	int upper,lower;
	int result;
	
	printf("enter the lower and upper intervals\n");
	scanf("%d%d",&lower,&upper);
	
	result=geoMean(lower,upper);
	
	printf("result is equal to %d",result);
	
	
}
int geoMean(int l, int u){
	
	srand(time(NULL));
	
	int r1,r2,r3,r4,r5,r6;
	double sonuc;
	int carpim,us;

	r1=1+rand()%(u-l+1);
	r2=1+rand()%(u-l+1);
	r3=1+rand()%(u-l+1);
	r4=1+rand()%(u-l+1);
	r5=1+rand()%(u-l+1);
	r6=1+rand()%(u-l+1);
	
	printf("r1=%d\n r2=%d\n r3=%d\n r4=%d\n r5=%d\n r6=%d\n",r1,r2,r3,r4,r5,r6);
	
	carpim=r1*r2*r3*r4*r5*r6;
	sonuc=pow(carpim,0.17);
	
	return sonuc;
}
