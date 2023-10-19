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
	int result;
	result=a+b*c-d;
	printf("result:%d",result);
	return 0;
}
