#include <stdio.c>
int main(void)
{
    int c = 5;
    while (c--)
    {
        printf("c is %d\n",c);
        c--;
        printf("c is %d\n",c);
    }
    return (0);
}