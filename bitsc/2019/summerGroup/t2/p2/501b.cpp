#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n,q;
map<string, string> names;
string temp1, temp2;

int main()
{
	cin>> q;
	auto iter = names.begin();
	for (int i = 0; i < q; ++i)
	{
		cin >> temp1>> temp2;
		iter = names.find(temp1);
		if(iter!=names.end())
		{
			string temp3= iter->second;
			names.erase(temp1);
			names.insert(pair<string,string>(temp2,temp3));	
		}
		else 
			names.insert(pair<string, string>(temp2,temp1));
	}

	cout << names.size()<<endl;
	for (auto ite = names.begin(); ite!=names.end() ; ++ite)
		cout << ite->second<< " "<< ite->first<< endl;
	
	return 0;
}
 