#include<stdio.h>
int main()
{
    int radius;
    printf("enter the value radius");
    scanf("%d",&radius);
    float pi=3.14;
    int height;
     printf("enter the value height");
    scanf("%d",&height);
    float result;
    result=2*pi*radius*height+2*pi*radius*radius;
    printf("%f",result);
	return 0;
}
