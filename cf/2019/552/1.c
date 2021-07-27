#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a, b, c,d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max, x,y,z,h,k;
	if(a>b)
		x=b,h=a;
	else
		x=a,h=b;
	if(c>d)
		y=d,k=c;
	else
		y=c, k=d;
	if(h>k)
		z=k, max=h;
	else
		z=h, max=k;

	printf("%d %d %d",max-x, max-y, max-z );

	return 0;
}
