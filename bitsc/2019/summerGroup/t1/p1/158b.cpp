#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, arr[100005],cars=0;

int main(int argc, char const *argv[])
{
	cin >>n;
	int cot =0;
	for (int i = 0; i < n; ++i)
		cin >>arr[i];
	int temp=0;
	sort(arr,arr+n);
	for (int i = n-1; i >= cot; i--)
	{
		temp=0;
		temp+=arr[i];
		for(int j=cot; j<i;j++)
		{
			temp+=arr[j];
			if(temp>4)
			{
				cot=j;
				cars++;
				break;
			}
		}
		temp=i;
	}
	cars++;
	cout <<cars;
	return 0;
}