//define the simple intrest//
#include<stdio.h>
int main(){
	int si,t,r,p;
	printf("principal");
	scanf("%d",&p);\
	printf("rate");
	scanf("%d",&r);
	printf("time");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("simple interest: %d",si);
	return 0;	
}
