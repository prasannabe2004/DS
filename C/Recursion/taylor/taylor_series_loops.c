
#include <stdio.h>
#include <time.h>

double e(int x, int n)
{
    double s = 1;

    if(n == 0)
        return s;
    
    for(;n>0;n--)
    {
        s = 1 + (x*s)/n;
    }
    return s;
}

int main()
{
    clock_t t;
    
    t = clock();
    printf("%lf\n",e(1, 100));
    t = clock() - t;
    
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute", time_taken);
    
    return 0;
}
