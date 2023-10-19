#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	int b;
	printf("enter the value of b");
	scanf("%d",&b);
	float c;
	printf("enter the value of c");
	scanf("%f",&c);
	float d;
	printf("enter the value of d");
	scanf("%f",&d);
	float result;
	result=a-b*c-d;
	printf("result:%f",result);
	return 0;
}
