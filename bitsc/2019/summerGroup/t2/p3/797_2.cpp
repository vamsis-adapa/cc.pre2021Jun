#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
ll arr[26];
string s;
stack<char> t;

ll find_min();

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for (ll i = 0; i < s.size(); ++i)
		arr[s[i]-'a']++;
	ll min=find_min();
	auto iter=s.begin();
	while(iter!=s.end())
	{
		if(!t.empty()&&t.top()<=min+'a')
		{
			cout<<t.top();
			t.pop();
		}
		else
		{
			arr[*iter-'a']--;
			if(*iter==(min+'a'))
			{
				cout<< *iter;
				min=find_min();
			}
			else
				t.push(*iter);
			iter++;
		}
	}
	while(!t.empty())
	{
		cout<< t.top();
		t.pop();
	}

	
	return 0;
}


ll find_min()
{
	for (int i = 0; i < 26; ++i)
	{
		if(arr[i]!=0)
		{
			return i;
		}
	}
	return -1;
}

