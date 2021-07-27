#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int 
#define max 100005

ll n, x, y, x2, y2,day=0;
char s[max]; 

int main(int argc, char const *argv[])
{
	cin >> x>> y >>x2>>y2>>n;
	cin >>s;
	int possible=0;
	ll xl=0,yl=0;
	ll mx=0,my=0 ; 
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='U')
			xl++;
		else if(s[i]=='D')
			xl--;
		else if(s[i]=='L')
			yl++;
		else if(s[i]=='R');
			yl--;
		if(mx<xl)
			mx=xl;
		if(my<yl)
			my=yl;

	}
	ll difx, dify;
	difx=x2-x;
	dify=y2-y;
	ll xls, yls;
	xls=(x2-x)/abs(x2-x);
	yls=(y2-y)/abs(y2-y);
	ll temp= difx/xl,xd,yd;
	xd=temp*xl-difx;
	yd=temp*yl-dify;
	if(xd+yd>temp*n)
	{
		cout << -1;
		return 0;
	}



	do
	{

	}
	while(possible==1);

	return 0;
}