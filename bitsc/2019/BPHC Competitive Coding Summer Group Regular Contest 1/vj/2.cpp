#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int arr[105], n,k,t;


int main(int argc, char const *argv[])
{
	cin >>n >>k >>t;
	int x= (t*n)/100;
	for(int i=0; i<x;i++)
		arr[i]=k;
	int y = k*(t*n-(100*x))/100;
	arr[x]=y;
	for (int i = 0; i < n; ++i)
		cout <<arr[i]<< " ";
	return 0;
}