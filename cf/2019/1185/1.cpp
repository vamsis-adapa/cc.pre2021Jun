#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int a, b, c,d, min, max, mid;

long long int calc(int n);

int main(int argc, char const *argv[])
{
	cin >> a>>b>> c >>d;
	if((a>=b&&b>=c)||(c>=b&&b>=a))
		mid=b;
	else if((b>=a&&a>=c)||(c>=a&&a>=b))
		mid=a;
	else
		mid =c;
	long long int ans = calc(a)+calc(b)+calc(c)-d;
	cout << ans;
	return 0;
}

long long int calc(int n)
{
	if(abs(mid-n)>=d)
		return 0;
	else 
		return d-abs(mid-n);
}
