#include<stdio.h>
int main()
{
	int num, rem,sum=0;
	scanf("%d",&num);
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
		
	}
	printf("armstrong %d",sum);
	if(temp=sum)
	{
		printf("\narmstrong ");
	}
	else
	{
		printf("not armstrong");
	}
	return 0;
}