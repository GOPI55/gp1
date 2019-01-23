#include <stdio.h>
#include <math.h>
int main()
{
	 long long int n,p,k,m,f;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%lld %lld %lld %lld",&p,&k,&m,&f);
	printf("%lld\n",(p/f)+(p/f)/k*m);
	}
	return 0;
}
		
	
	
	
	
