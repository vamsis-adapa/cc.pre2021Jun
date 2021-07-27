#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

string s;

int main(int argc, char const *argv[])
{
	cin >> s;
	int le =s.length();
	int check =1;
	// cout << le<<endl;

	for (int i = 1; i < le; ++i)
	{
		if (s[i]=='1')
			check =0;
	}
	int ans= ((le-1)/2)-check+1;
	if(le==2)
		ans=1;
	cout << ans;
	return 0;
}