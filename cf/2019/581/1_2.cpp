#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

string s;


int main(int argc, char const *argv[])
{
	cin >> s;
	int le =s.length();
	int ans=0;
	if((le-1)%2!=0)
		ans= (le-1)/2+1;
	else 
	{
		int check=0;
		for (int i = 1; i < le; ++i)
			if (s[i]=='1')
			{check =1; break;}
		ans=(le-1)/2+check;
	}
	cout << ans;


	return 0;
}