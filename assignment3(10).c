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
	scanf("%d",&c);
	int d;
	printf("enter the value of d");
	scanf("%d",&d);
	int e;
	printf("enter the value of e");
	scanf("%d",&e);
	int f;
	printf("enter the value of f");
	scanf("%d",&f);
	int result;
	result=a*b-(c-d*e-f);
	printf("result:%d",result);
	return 0;
}
