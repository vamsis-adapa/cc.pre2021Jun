#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a, mul=1;

void calc(int n);

int main(int argc, char const *argv[])
{
	cin >> a;
	calc(a);
	return 0;
}

int ciel(int k)
{
	int y= k/2;
	if(2*y==k)
		return y;
	else 
		return y+1;


}

void calc(int n)
{
	if(n>3)
	{
		for (int i = 0; i < ciel(n); ++i)
		{
			cout  << 1*mul<<" ";
		}
		mul *=2;
		calc(n/2);
	}
	else
	{
		for (int i = 1; i < n; ++i)
			cout <<1*mul <<" " ;
		cout <<n*mul;
	}
}

