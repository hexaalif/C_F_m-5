#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x >= 10)
    {
        x = x / 10;
    }
    if (x % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    printf("commiting 2nd time to git repo");
    return 0;
}