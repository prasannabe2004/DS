#include <stdio.h>
#include <time.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
    
}

int main()
{
    clock_t t;
    t = clock();
    printf("%d\n", fib(5));
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute", time_taken);
    
    return 0;
}