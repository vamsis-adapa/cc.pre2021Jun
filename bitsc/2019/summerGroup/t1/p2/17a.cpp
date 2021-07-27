#include <iostream>
#include <bits/stdc++.h>

#define MAX 1000000

int arr[MAX];

int main(int argc, char const *argv[])
{
	arr[1]=1;
	int n,k,count=0;
	int prev=0, next=2;
	scanf("%d%d",&n,&k);
	for (int i = 2; i <= sqrt(n) ; ++i)
	{
		if (arr[i]==0)
			for(int t=2*i;t<=n;t=t+i)
				arr[t]=1;
	}
	for (int i = 3; i <= n; ++i)
	{
		if (arr[i]==0)
		{
			prev=next;
			next=i;
			if (arr[next+prev+1]==0&&(next+prev+1<=n))
				count++;
		}
	}
	if (count>=k)
		printf("YES");
	else
		printf("NO");

	return 0;
}