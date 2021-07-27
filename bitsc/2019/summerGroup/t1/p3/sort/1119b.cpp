#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 1005

int n;
long long int h,k,arr[MAX],sort[MAX];

void swap(int one,int two);

int main(int argc, char const *argv[])
{
	cin >> n>>h;
	for (int i = 0; i < n; ++i)
		cin >>arr[i];
	int he=0;
	int i=0;
	for (i = 0; i < n; ++i)
	{
		int j=i;
		while(j!=0&&!(arr[j]>arr[j-1]))
		{
			swap(j,j-1);
			j--;
		}
		he=0;
		for (int u = i; u >=0 ; u-=2)
		{
			he+=arr[u];
		}
		k=i+1;
		if(he>h)
		{
			k--;
			break;
		}
	}
	cout << k;
	return 0;
}

void swap(int one,int two)
{
	int temp=arr[one];
	arr[one]=arr[two];
	arr[two]=temp;
	return;
}