#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll t,n,pr=1;

ll powe(ll a, ll b);

#define mo 1000000007

int main()
{
	cin>> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		if(n%3==0)
			pr=powe(3, n/3);
		else if(n%3==1)
			pr=powe(3,(n/3)-1)*(3+1);
		else if (n%3==2)
			pr=powe(3,n/3)*(n%3);
		pr=pr%mo;
		if(n==1)
			pr=1;
		cout<< pr<< endl;
	}
    return 0;
}
 
ll powe(ll a, ll b)
{
	if(b==0)
		return 1;
	ll ret=powe(a, b/2)%mo;
	if(b%2==0)
		return (ret*ret)%mo;
	else return (ret *ret*a)%mo;
}