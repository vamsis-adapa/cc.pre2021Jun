#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string a, b;

int  check(string a, string b);
string minstring(string s);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> a>> b;
	a=minstring(a);
	b=minstring(b);
	if(a==b)
		cout<< "YES";
	else 
		cout<<"NO";
	
	return 0;
}


string minstring(string s)
{
	if (s.length()%2==1)
		return s;
	string s1 = minstring(s.substr(0, s.length()/2));
	string s2 = minstring(s.substr(s.length()/2,s.length()));

	if (s1<s2)
		return s1+s2;
	else
		return s2+s1;

}
