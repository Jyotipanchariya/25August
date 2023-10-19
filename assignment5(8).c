#include<stdio.h>
int main()
{

int num;

scanf("%d",&num);

     if((num % 5 == 0) && (num % 11 == 0))
 {
 	printf("number is divisible by 5 and 11");
 }
    else {
 	printf("not divisible by 5 and 11");
 }
 return 0;
}
