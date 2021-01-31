// harshad number mod(ab/(a+b))=0
// fonksiyonlar sadece 1 görevden sorumlu olabilirler.
#include<stdio.h>
#include<stdlib.h>
int sumofDigits(int n);
main(){
	int num;
	int SOD;
	
	printf("enter the number");
	scanf("%d",&num);
	
	SOD=sumofDigits(num); // burada sum'ı return ediyor.
	
	printf("SOD is %d\n",SOD);

	
	if(isHardhadNumber(num, SOD)) // burada sonuc 1 ise if'in içi doğru sayılır
		printf("the number is %d is a harshad number\n",num);
	else
		printf("the number is not %d is a harshad number\n",num);
	
	
	
}
int sumofDigits(int n){	//function header.
	int remainder;
	int sum=0;
	
	while(n!=0){
		
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	
	return sum;
	
}
int isHardhadNumber(int n, int s){
	// burada s sum a denk geliyor.
	if(n%s==0)
		return 1;
	else
		return 0;
}
