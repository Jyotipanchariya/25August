1.  print 1 to 100

#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100)
    {
        printf("\n%d",a);
        a++;
    }
    return 0;
}

-----------------------------------------------------------------
2. print 100 to 1

#include<stdio.h>
int main()
{
    int a=100;
    while(a>=1)
    {
        printf("\n%d",a);
        a--;
    }
    return 0;
}
-----------------------------------------------------------------

3. print 1 to 100  even numbers

#include <stdio.h>

int main() {
    int number = 2;
    
    while (number <= 100) {
        printf("%d ", number);
        number += 2; 
    }
    
    return 0;
}

----------------------------------------------------------------

4. print 100 to 1 even number

#include<stdio.h>

int main() {
    int number = 100;
    
    while (number >= 2) {
        printf("%d ", number);
        number -= 2; 
    }
    
    return 0;
}

-----------------------------------------------------------------

5. print 1 to 100 odd number

#include <stdio.h>

int main() {
    int number = 1;
    
    while (number <= 100) {
        printf("%d ", number);
        number += 2; 
    }
    
    return 0;
}
-------------------------------------------------------------------------------------------
6. print 50 to 500

#include<stdio.h>

int main() {
    int number = 50;
    
    while (number <= 500) {
        printf("%d ", number);
        number ++; 
    }
    
    return 0;
}

-------------------------------------------------------------------------
7. print 500-50

#include<stdio.h>

int main() {
    int number = 500;
    
    while (number >= 50) {
        printf("%d ", number);
        number --; 
    }
    
    return 0;
}
------------------------------------------------------
 8. print 50 -1000 even number

#include <stdio.h>

int main() {
    int number = 50;
    
    while (number <= 1000) {
        printf("%d ", number);
        number += 2; 
    }
    
    return 0;
}
-----------------------------------------------------------
9. enter numbers between two numbers
#include <stdio.h>

int main()
{ 
    int a,b,c;
    printf(" enter the value a and b\n");
    scanf("%d %d",&a ,&b);
    
    if(a>b)
    {
        printf("a is not greater than b\n");
    }
    else{
        int c=a;
        while(c<=b)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
 
    
    return 0;
}
------------------------------------------------------------------------------------
10. even number between two number

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the  number: ");
    scanf("%d", &a);

    printf("Enter the  number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a cannot be greater than b.\n");
    } else {
        int c =(a % 2 == 0) ? a : a + 1;

        while (c <= b) {
            printf("%d ", c);
            c += 2;
        }

        printf("\n");
    }

    return 0;
}
-----------------------------------------------
11. odd number between two number

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the  number: ");
    scanf("%d", &a);

    printf("Enter the  number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a cannot be greater than b.\n");
    } else {
        int c =(a % 1 == 0) ? a : a + 1;

        while (c <= b) {
            printf("%d ", c);
            c += 2;
        }

        printf("\n");
    }

    return 0;
}
-------------------------------------------------------

12. sum of 1 to 10 number

#include <stdio.h>

int main() {
    int a = 1;      
    int sum = 0;    

    while (a <= 10) {
        sum += a;   
        a++;        
    }

    printf("The sum of numbers from 1 to 10 is: %d\n", sum);

    return 0;
}
----------------------------------------------------------------
13. 2 table

#include <stdio.h>

int main() {
    int number = 2;
    int i = 1;     

    printf("2  Table:\n");

    while (i <= 10) {
        int result = number * i;
        printf("%d\n", result);
        i++; 
    }

    return 0;
}
-----------------------------------------------------------------------------------
14 user input table

#include <stdio.h>

int main() {
    int number;
    printf("enter the value");
    scanf("%d",&number);
    int i = 1;     

    printf("  Table:\n");

    while (i <= 10) {
        int result = number * i;
        printf("%d\n", result);
        i++; 
    }

    return 0;
}
-------------------------------------------------------------

15. 2 to 10 tables

#include <stdio.h>

int main() {
    int a = 2;
    int b = 10;
    int c = 1;

    while (a <= b) {
        printf("%d Times Table:\n", a);

        c = 1;

        while (c <= 10) {
            int result = a * c;
            printf("%d x %d = %d\n", a,c, result);
            c++;
        }

        printf("\n");
        a++;
    }

    return 0;
}
------------------------------------------------------------------------

16. table 1 to 10 user input

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10) {
        printf(" enter a number between 1 and 10.\n");
    } else {
        int multiplier = 1;

        printf("%d Times Table:\n", number);

        while (multiplier <= 10) {
            int result = number * multiplier;
            printf("%d x %d = %d\n", number, multiplier, result);
            multiplier++;
        }
    }

    return 0;
}
-------------------------------------------------------------------------------------

17.
#include <stdio.h>

int main() {
    printf("Numbers from 1 to 100 divisible by both 7 and 3:\n");

    int number = 1;

    while (number <= 100) {
        if (number % 7 == 0 && number % 3 == 0) {
            printf("%d\n", number);
        }
        number++;
    }

    return 0;
}
--------------------------------------------------------------------------------------------
18. number is divisible by 5 and 11

#include <stdio.h>

int main() {
    printf("Numbers between 1 and 100 divisible by 5 or 11:\n");

    int number = 1;

    while (number <= 100) {
        if (number % 5 == 0 || number % 11 == 0) {
            printf("%d\n", number);
        }
        number++;
    }

    return 0;
}
----------------------------------------------------------------------
19. reverse table of 2

#include <stdio.h>

int main() {
    int number = 2; 

    printf("2 Times Table in Reverse Order:\n");

    while (number >= 2) {
        printf("%d x 10 = %d\n", number, number * 10);
        number--;
    }

    return 0;
}
------------------------------------------------------------------

