#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a,n;

int main(int argc, char const *argv[])
{
	int t;
	cin >>t;
	a=t;
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a=a/10;
	}
	if (sum%4==0)
		cout << t;
	else
		cout << t+4-sum%4;
	
	return 0;
}