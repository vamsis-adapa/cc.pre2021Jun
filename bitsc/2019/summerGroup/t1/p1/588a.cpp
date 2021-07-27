#include <iostream>
#include <bits/stdc++.h>

#define MX 100005

using namespace std;

int n,a[MX],p[MX],cost=0;

void recur(int j,int e);

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin >> a[i] >>p[i];
	recur(  0, n);
	
	cout <<cost;
	return 0;
}

void recur(int j,int e)
{
	if(e==j)
		return;
	int temp=j,min=355;
	for (int i = j; i < e; ++i)
	{
		if(p[i]<min)
		{
			min=p[i];
			temp=i;
		}
	}
	for (int i = temp; i < e; ++i)
		cost+=min*a[i];
	recur(j,temp);
	return;
}