#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

int n, m,queries;
char operations;
int arr[MAX];

int addstatus(int k);
int removestatus(int k);

int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		scanf(" %c %d", &operations, &queries);
		if(operations=='+')
			addstatus(queries);
		else
			removestatus(queries);
	}
	return 0;
}

int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int addstatus(int k)
{	
	if(arr[k]==1)
	{
		printf("Already on\n");
		return 1;
	}
	for(int i =0; i<=n; i++)
	{
		if(arr[i]==1)
		{
			if (gcd(i,k )!=1)
			{
				printf("Conflict with %d\n", i);
				return 0;
			}
		}
	}
	arr[k]=1;
	printf("Success\n");
	return 1;
}
int removestatus(int k)
{
	if(arr[k]==0)
		printf("Already off\n");
	else
	{
		arr[k]=0;
		printf("Success\n");
	}
	return 0;
}