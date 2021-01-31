#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
double distance(int d1_x,int d1_y,int d2_x,int d2_y);
double totalDistance(double d1 ,double d2,double d3 );

main(){
	
	int r_x=0,r_y=0; //initial position.(0,0)
	int p1_x,p1_y,p2_x,p2_y; // two produtct;
	int e_x,e_y;
	
	srand(time(NULL)); // random sayýlarýn farklý atanmasýný saðlar.
	
	p1_x=rand()%6;
	p1_y=rand()%6; // these are randomly.
	
	p2_x=6+rand()%5;
	p2_y=6+rand()%5; // these are randomly.
	
	
	printf("p1_x=%d p1_y=%d p2_x%d p2_y=%d\n",p1_x,p1_y,p2_x,p2_y);
	
	printf("enter the value of e_x and e_y. These are must be greather than 10.\n");
	scanf("%d%d",&e_x,&e_y);
	
	double dist1=distance(r_x,r_y,p1_x,p1_y);
	double dist2=distance(p1_x,p1_y,p2_x,p2_y);
	double dist3=distance(p2_x,p2_y,e_x,e_y);
	
	double total=totalDistance(dist1 ,dist2,dist3 );
	
	printf("dist1=%lf\n dist2=%lf\n dist3=%lf\n total=%lf\n",dist1,dist2,dist3,total);
	
}
double distance(int d1_x,int d1_y,int d2_x,int d2_y){
	
	double dist;
	// iki nokta arasýndaki mesafeyi hesaplamak için bu fonksiyon kullanýlýr.
	dist=sqrt(pow((d2_x-d1_x),2)+pow((d2_y-d1_y),2));
	return dist;
	
}
double totalDistance(double d1 ,double d2,double d3 ){
	
	return d1+d2+d3;
	
}
