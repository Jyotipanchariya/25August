#include<stdio.h>
int main()
{
	//character userinput  f=female m=male
	char gender;
	printf("enter the gender ");
	scanf("%c", &gender);
	if(gender=='f' || gender=='F')
	{
		printf("you are female");
	}
	else if(gender=='m' || gender=='M')
	{
		printf("you are male");
	}
	return 0;
}
