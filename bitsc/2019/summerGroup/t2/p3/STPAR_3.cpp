#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
stack<int> q;

void funct(int n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	while(n)
	{
		funct(n);
		while(!q.empty())
			q.pop();
		cin>>n;
	}
	
	return 0;
}
 
void funct(int n)
{
	int next=0,temp,ans=1,in=0;
	for (int i = 1; (i <= n)&ans; ++i)
	{
		next=0;
		while(!next)
		{
		if(!q.empty()&&q.top()==i)
		{
			q.pop();
			next=1;
			break;
		}
		if(in>=n)
		{
			ans=0;
			break;
		}
		cin>>temp;
		in++;
		if(temp==i)
			next=1;
		else
		{
			if(q.empty()||q.top()>temp)
			{
				q.push(temp);
				next=0;
			}
			else 
			{
				for (int i = 0; i < n-in; ++i)
					cin>>temp;
				ans=0;
				next=1;
			}
		}
		}
	}
	if(ans==0)
		cout<< "no"<<endl;
	else
		cout<<"yes"<<endl;
}