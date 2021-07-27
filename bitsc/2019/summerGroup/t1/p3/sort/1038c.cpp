#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

int n;
long long int a[MAX], b[MAX]; 

int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	int an=n, bn=n;
	long long int as=0,bs=0;
	while(!(an==0&&bn==0))
	{
		//move a
		if(an!=0&&(bn==0||a[an-1]>=b[bn-1]))
		{
			as+=a[an-1];
			an--;
		}
		else
			bn--;
		//move b
		if(bn!=0&&(an==0||a[an-1]<=b[bn-1]))
		{
			bs+=b[bn-1];
			bn--;
		}
		else
			an--;
	}
	cout << as-bs;
	return 0;
}