#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string s;
stack<char> stri;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		for ( auto iter = s.begin(); iter!=s.end() ; ++iter)
		{
			if(*iter>='a'&&*iter<='z')
				cout<<*iter;
			else if(*iter==')')
			{
				while(stri.top()!='(')
				{
					cout<<stri.top();
					stri.pop();
				}
				stri.pop();
			}
			else
				stri.push(*iter);
		}
		cout<< endl;
	}

	return 0;
	}
 