#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n;
map<string,int >names;

int main()
{
	cin >>n;
	for (int i = 0; i < n; ++i)
	{
		string temp;
		cin >> temp;
//		cout<<temp;
		auto iter=names.find(temp);
		if(iter==names.end())
		{
			names.insert(pair<string,int>(temp,1));
			cout<< "OK"<<endl;
		}
		else
		{
			cout<<iter->first<<iter->second<<endl;
			iter->second++;
		}
	}
	
	return 0;
}
 