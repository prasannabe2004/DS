#include <stdio.h>
#include <time.h>

int F[20];

int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
            F[n-2] = fib(n-2);
        if(F[n-1] == -1)
            F[n-1] = fib(n-1);
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
    
}

int main()
{
    clock_t t;

    int i = 0;
    for(;i<20;i++)
        F[i] = -1;

    t = clock();
    printf("%d\n", fib(10));
    t = clock() - t;

    double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute", time_taken);
    
    return 0;
}