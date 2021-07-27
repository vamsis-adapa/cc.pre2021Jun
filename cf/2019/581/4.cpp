#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int 

string s,t;
ll l, r;

int main()
{
	cin >>  s;
	ll le= s.length();
	ll len=0, left=0, right=0,max=0;
	char cur=s[0],rig=s[right],lef=s[left];
	while(right<le)
	{
		if(s[right]=='1')
		{
			len++;
			cur='1';
			if(right==le-1)
				if(max<len)
				{
					l=left;
					r=right;
				}
		}
		else if(s[right]=='0')
		{
			if(cur=='0')
				len++;
			else 
			{
				if(max<len)
				{
					l=left;
					r=right-1;
					max=len;
				}
				left=right;
				cur='0';
				len=1;
			}
		}
		right++;
	}
	if(l%2==0)
		for (ll i = 0; i < l; ++i)		
		{
			if (i%2==0)
				cout << 0;
			else cout <<1;
		}
	else 
		for (ll i = 0; i < l; ++i)		
		{
			if (i%2==0)
				cout << 1;
			else cout <<0;
		}

	for (ll i = l; i <r; ++i)
		cout<< 0;
	for (ll i = r; i <=r; ++i)
		cout <<1;
	int odd=0;
	for (ll i = r+1; i < le; ++i)
	{
		if( odd%2==0)
			cout << 0;
		else cout << 1;
		++odd%2;
	}
	return 0;
}