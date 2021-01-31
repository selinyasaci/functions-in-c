//1 prompt the number
	//seperate the number into digits num=num/10  i++
	// 18 even gigits number
	//162 odd digits number


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int evendigits(int n);
main(){
	
	int num;
	int result;
	
	printf("enter the number");
	scanf("%d",&num);

	result=evendigits(num);
	
	printf("result=%d",result);
	
	if(result%2==1)
		printf("this number is even");
	
	else
	printf("this number is not even");
	
	
	// genelde is ,le başlayan fonksiyonlar if in içerisinde direk kullanılıyot
	
	
	
	
	
}
int evendigits(int n){	//function header

	int d;
	
	while(n!=0){
		n=n/10;
		d++;
	}
	
	return d;
	
}
