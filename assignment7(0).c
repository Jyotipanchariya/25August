#include<stdio.h>
int main()
{
	int num=5;
	int fact=1;
	int i=1;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
	i++;
	return 0;
}
