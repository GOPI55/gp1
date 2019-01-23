 #include<stdio.h>
int main()
{int y,b,r,x;
scanf("%d%d%d",&y,&b,&r);
if ((y<b)&&(y<r))
{	if ((r-y)>=2)
		{x=y+y+1+y+2;
		}
	else
		{x=y-1+y+y+1;
		}
}
else if ((b<=y)&&(b<r))
{	x=b-1+b+b+1;
}
else if ((r<=y)&&(r<=b))
{	x=r-2+r-1+r;
}
printf("%d",x);
return(0);
}
