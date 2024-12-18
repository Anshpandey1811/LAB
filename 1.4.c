//deine the area and perimeter//
#include<stdio.h>
int main(){
	int r;
	float area,para;
	printf("enter the radius of circle");
	scanf("%d",&r);
	area = 3.14*r*r;
	para = 2*3.14*r;
	printf("area of circle is%.2f %.2f",area,para);
	return 0;
	}
