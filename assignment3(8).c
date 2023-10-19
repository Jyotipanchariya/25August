#include<stdio.h>
int main()
{
	float a;
	printf("enter the value of a");
	scanf("%f",&a);
	float b;
	printf("enter the value of b");
	scanf("%f",&b);
	int c;
	printf("enter the value of c");
	scanf("%d",&c);
	float d;
	printf("enter the value of d");
	scanf("%f",&d);
	float result;
	result=a*b-c+d;
	printf("result:%f",result);
	return 0;
}
