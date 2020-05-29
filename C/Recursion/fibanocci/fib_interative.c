#include <stdio.h>

int fib(int n)
{
    int a = 0, s = 0, b = 1, i = 0;
    if (n <= 1)
        return n;
    for(i = 2 ; i <= n;i++)
    {
        s = a + b;
        a = b;
        b = s;
    }
    return s;
}

int main()
{
    printf("%d\n", fib(10));
    return 0;
}