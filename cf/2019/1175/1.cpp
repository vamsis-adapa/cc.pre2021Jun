#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int row;
long long int n,k;

int main(int argc, char const *argv[])
{
	long long int count;
	cin >> row;
	while(row !=0)
	{
		count=0;
		cin>> n >>k;
		while(n!=0)
		{
			if(n%k==0)
				n=n/k;
			else
				n=n-1;
			count++;
		}
		cout << count<< "\n";
		row--;
	}

	return 0;
}