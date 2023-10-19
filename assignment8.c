#include<stdio.h>
int main()
{
	int a;
	printf("enter the value a");
	scanf("%d",&a);
	int fact=1;
	int i=1;
	while(i<=a)
	{
		fact=fact*i;
		i++;
	}
    printf("%d",fact);
    return 0;
}
