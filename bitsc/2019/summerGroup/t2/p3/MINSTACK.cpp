#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string s;
stack<pair<ll,ll>> pres;
ll temp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> n;

	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		if (s=="PUSH")
		{
			cin>>temp;
			if(pres.empty())
				pres.push(make_pair(temp,temp));
			else if(temp>pres.top().second)
				pres.push(make_pair(temp,pres.top().second));
			else
				pres.push(make_pair(temp,temp));
		}
		else if (s=="POP")
		{
			if (pres.empty())
				cout << "EMPTY"<<endl;
			else
				pres.pop();
		}
		else if(s=="MIN")
		{
			if (pres.empty())
				cout << "EMPTY"<<endl;
			else
				cout << pres.top().second<<endl;
		}
	}
	return 0;
}
