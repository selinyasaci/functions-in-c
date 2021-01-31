#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void primes(int lower,int upper);
int isPrime(int num);
main(){
	int number;
	srand(time(NULL));
	
	int low=10;
	int up=50;
	
	printf("%d\n%d\n",low,up);
	
	primes(low,up);
	
	
}
void primes(int lower,int upper){
	
	while(lower<=upper){
		if(isPrime(lower)){
			printf("%d\n",lower);
		}
		lower++;

	}
		
}
int isPrime(int num){
	int i;
	int cnt=0;
	
	for(i=2;i<num;i++){	// asal sayý olup olmadýðýný anlamak için i yi ikiden baþlatman lazým.
		
		if(num%i==0){
			cnt++;
		}
	}
	
	if(cnt==0)
		return 1;
	else	
		return 0;
	
	
	
}
