#include <stdio.h>

int TOH(int n, int A, int B, int C)
{
	if(n>0)
	{
		TOH(n-1,A, C, B);
		printf("Move %d %d\n", A, C);
		TOH(n-1,B, A, C);

	}
}
int main()
{
	TOH(4,1,2,3);
	return 0;
}