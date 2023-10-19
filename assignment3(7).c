#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	int b;
	printf("enter the value of b");
	scanf("%d",&b);
	int c;
	printf("enter the value of c");
	scanf("%f",&c);
	int d;
	printf("enter the value of d");
	scanf("%d",&d);
	float result;
	result=a+b-(c*d);
	printf("result:%f",result);
	return 0;
}
