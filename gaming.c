#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(void);

main(){
	
	srand(time(NULL));
	
	if(game()) // burada return 1 olursa sonuç doðru olur.
		printf("you win\n");
	else
		printf("you lost\n");
	
	
}

int game(void) { // içerdeki void parametreleri anlatýyor. mainden game'e bilgi aktarmak için kullanýlýyor. MAinden game'e bir parametre gelmesi gerekmiyor.
	int n1,n2;
	int sum;
	
	// void kullandýk çünkü soruda that recieves nothing diyor.
	
	do{
		
		n1=1+rand()%(6-1+1);
		n2=1+rand()%(6-1+1);
	
		printf("n1=%d n2=%d\n",n1,n2);
		sum=n1+n2;
		
		if(sum==7 || sum==11)
			return 1;
			
		else if(sum==2|| sum==3 || sum==12)
			return 0;
		else
			printf("continue the game\n");
		
	}while(!(sum==2 || sum==3 || sum==7 || sum==11 || sum==12));
	
}
