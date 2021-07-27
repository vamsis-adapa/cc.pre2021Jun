#include <stdio.h>

#define MAX 10000000
int profit=0;
int n,h,m;

int min(int a,int b);

int main(int argc, char const *argv[])
{
	scanf("%d%d%d",&n,&h,&m);
	int l[m+1], r[m+1], x[m+1];
	int cost[n+1];
	for (int i = 0; i < n+1; ++i)
		cost[i]=h;
	for (int i = 0; i < m; ++i)
		scanf("%d%d%d",&l[i],&r[i],&x[i]);
	for (int i = 0; i < m; ++i)
	{
		for (int j = l[i]; j < r[i]+1; ++j)
		{
			cost[j]=min(cost[j],x[i]);
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		profit+=cost[i]*cost[i];
	}
	printf("%d",profit);

	return 0;
}


int min(int a,int b)
{
	if (a>b)
		return b;
	else return a;
}