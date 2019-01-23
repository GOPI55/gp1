#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],p[100];
	int n,k;
	gets(s);
	scanf("%d",&k);
    n=strlen(s);	
	for(int i=0;i<n;i++)
	{
		if(s[i]==32)
		{
			p[i]=s[i];
			}
		 
		if(s[i]<91 && s[i]>64)
		{
			p[i]=s[i]+k;
			
			while(((p[i])/91)!=0)
			{
			p[i]=(((p[i])%91)+65); 
			}
		}
	}
	printf("%s",p);
	return 0;
}	
