
#include <stdio.h>
#include <time.h>

double e(int x, int n)
{
    static double p = 1, f = 1, s = 1;
    int i = 0;

    if(n == 0)
    {
        return 1;
    }
    else
    {
        for(i = 1;i<=n;i++)
        {
            p = p * x;
            f = f * i;
            s += p/f;
        }
    }
    return s;
}

int main()
{
    clock_t t;
    
    t = clock();
    printf("%lf\n",e(1, 10));
    t = clock() - t;
    
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute", time_taken);
    
    return 0;
}