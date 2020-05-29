#include <stdio.h>

int fun(int n)
{
    if(n > 0)
    {
        return fun(n-1) + n;
    }
}

int main()
{
    printf("%d\n",fun(10));
    return 0;
}
