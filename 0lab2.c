#include <stdio.h>        
int main()
{
    int a, b, s;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    s = 0;
    if (a == 0)
    {
        printf("Deleniye na 0");
    }
    if (a != 0)
    {
        s = b % a;
    }
    if (s >= 0)
        printf("Ostatok %d/%d: %d", b, a, s);
    else
        printf("Ostatok < 0");
    return 0;
}