#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string a, b;

int  check(string a, string b);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> a>> b;
	int ans =check(a,b);
	if(ans)
		cout<< "YES";
	else 
		cout<<"NO";
	
	return 0;
}

int check(string a, string b)
{
	if(a==b)
		return 1;
	ll len=a.length();
	string a1, a2, b1, b2;
	if(len%2)
		return 0;
	a1=a.substr(0, len/2);
	a2=a.substr(len/2,len);
	b1=b.substr(0, len/2);
	b2=b.substr(len/2,len);
	return ((check(a1, b2)&&check(a2,b1)))||(check(a1,b1)&&check(a2,b2));
}


