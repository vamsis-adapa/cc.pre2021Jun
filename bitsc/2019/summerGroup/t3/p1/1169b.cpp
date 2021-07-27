#include <bits/stdc++.h>
using namespace std;

#define MAX 300005 //
#define ll long long int

ll n,m;
ll t1,t2;
vector<pair<int,int>> values;

int find(int n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>t1>>t2;
		values.push_back(make_pair(t1,t2));
	}
	int x1=values.begin()->first;
	int fin=find(x1);
	if(fin)
	{
		cout<<"YES";
		return 0;
	}
	x1=values.begin()->second;
	fin=find(x1);
	if (fin)
		cout<<"YES";
	else
		cout<< "NO";
	return 0;
}

int find(int x1)
{
	int x2=-1;
	int tim=0;
	int ans=1;
	pair<int,int> possib;
	possib=make_pair(-1,-1);
	for (auto iter=values.begin();iter!=values.end();++iter)
	{
		// cout<< x1<<"xi,   "<<iter->first<<" ,"<<iter->second<<", "<<tim<<", pos=("<<possib.first<<","<<possib.second<<")->"<<x2<<"\n";
		if(iter->first==x1||iter->second==x1)
			continue;
		else if(tim==0)
		{
			possib=*iter;
			tim++;
		}
		else if(tim==1)
		{
			if((possib.first==iter->first||possib.first==iter->second)&&(possib.second==iter->first||possib.second==iter->second))
				continue;
			if(possib.first==iter->first||possib.first==iter->second)	
				x2=possib.first;
			else if (possib.second==iter->first||possib.second==iter->second)
			{
				x2=possib.second;
			}
			else
			{
				ans =0;
				break;
			}
			tim++;
		}
		else
		{
			if(x2==iter->first||x2==iter->second)
				continue;
			else
			{
				ans=0;
				break;
			}
		}
	}
	return ans;
}

