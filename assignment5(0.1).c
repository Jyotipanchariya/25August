#include<stdio.h>
int main()
{
	int a=78,b=27,c=46;
	if (a>b && a>c)//78>27 78>46
	{
		printf("a is maximum");
		
	}
	else if(b>a && b>c)
	{
		printf("b is maximum");
		
	}
	
	else{
		printf("c is maximum");
		
	}
	return 0;
}
