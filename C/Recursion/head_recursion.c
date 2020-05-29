/* head_recursion.c */

#include <stdio.h>

void fun(int n)
{
    if(n > 0)
    {
        fun(n-1);
        printf("%d\n", n);
    }
}

int main()
{
    fun(4);
    return 0;
}