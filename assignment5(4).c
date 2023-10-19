#include <stdio.h>
int main(void){
int a,b,c;
printf("Enter the  numbers ");
scanf("%d %d %d",&a,&b,&c);  // Enter  numbers

if(a>b){
 if(a > c )
 { printf(" Highest number is a = %d",a);}
 else
 { printf(" Highest number is c = %d",c);}
}
else
{
 if(b > c )
 { printf( "highest number is b = %d",b);}
 else
 {printf(" highest number is c= %d",c);}
}
	return 0;
}


 
