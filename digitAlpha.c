#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT");
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\n");
        if (ch >= 'a' && ch <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}