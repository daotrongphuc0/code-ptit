#include <stdio.h>
#include <math.h>

int  isPrime(int n)
{
	if(n<2)
		return 0;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int ChiaHet(int m, int n)
{
	for(int i= m ; i<=n ; i++)
	{
		for(int d = 2; d <= 10; d++)
		{
			if (isPrime(d) == 1)
			{
				if(i % d == 0 && i % (d*d == 0)
				{
					printf("%d ",d);
				}
			}
		}
	}
}


int main()
{
	int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    
	ChiaHet(m,n);

    return 0;
}