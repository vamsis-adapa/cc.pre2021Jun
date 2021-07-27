#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
ll t;
string p;
string h;
string alpha[27];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	cin >> p >> h;
	for(auto iter = p.begin();iter!=p.end(); iter++)
	{
		alpha[*iter-'a']+=alpha[*iter-'a'];
	}
	for(auto iter = h.begin();iter!=h.end(); iter++)
	{
		alpha[*iter-'a']+=alpha[*iter-'a'];
	}
	
	return 0;
}
 