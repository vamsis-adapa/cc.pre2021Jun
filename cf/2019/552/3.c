#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b,c;
	scanf("%d%d%d", &a, &b,&c);
	int a1=a, b1=b, c1=c;
	int n=1;
	int check=0;
	int days =0;
	while(check==0)
	{
		a1=a-3, b1=b-2, c1=c-2;
		if (a1<=0)
			check=1;
		else if (b1<=0)
			check=2;
		else if (c1<=0)
			check=3;
		n++;
	}
	days=(n-2)*7;
	a1 =a-(n-2)*3;
	b1= b-(n-2)*2;
	c1= c-(n-2)*2;
	if (check==1)
	{
		if (a1==1&&b1>=2&&c1>=2)
		{
			days+=5;
		}
		else if (a1==2&&b1>=2&&c1>=2)
		{
			days+=6;
		}
		else if (a1==3&&b1>=2&&c1>=2)
		{
			days+=7;
		}/////
		else if (a1==1&&b1==1&&c1>=2)
		{
			days+=4;
		}
		else if (a1==2&&b1==1&&c1>=2)
		{
			days+=4;
		}
		else if (a1==3&&b1==1&&c1>=2)
		{
			days+=6;
		}////
		else if (a1==1&&b1==1&&c1==1)
		{
			days+=3;
		}
		else if (a1==2&&b1==1&&c1==1)
		{
			days+=4;
		}
		else if (a1==3&&b1==1&&c1==1)
		{
			days+=5;
		}////
		else if (a1==1&&b1>=2&&c1==1)
		{
			days+=3;
		}
		else if (a1==2&&b1>=2&&c1==1)
		{
			days+=5;
		}
		else if (a1==3&&b1>=2&&c1==1)
		{
			days+=6;
		}
	}
	if (check==2)
	{
		if(b1==1&&c>=2)
		{
			days+=6;
		}
		else if(b1==2&&c>=2)
		{
			days+=7;
		}
		else if(b1==1&&c==1)
		{
			days+=4;
		}
		else if(b1==2&&c==1)
		{
			days+=5;
		}
	}
	if (check==3)
	{
		if (c1==1)
		{
			days += 5;
		}
		else if (c1==2)
		{
			days+=7;
		}
	}

	printf("%d",days);
	return 0;
}