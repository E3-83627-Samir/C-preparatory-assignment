#include<stdio.h>
int main()
{
    char ch;
    printf(" Enter a character: ");
    scanf("%c", &ch);

    if (ch>= 'A' && ch<='Z' )
    {
        printf(" UPPERCASE");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("LOWERCASE");
    }

    else if (ch>= '0' && ch<= '9' )
    {
        printf(" %c is digit", ch);
    }
    else
    {
       printf(" %c is not digit", ch);
    }
        
    return 0;
}

