#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            printf("\nIt's a Vowel");
        else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("\nIt's a Vowel");
        else
            printf("\nIt's a Consonant");
    }
    else
        printf("\nIt's neither Vowel nor Consonant");
    getch();
    return 0;
}
