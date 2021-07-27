#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int x1,yx1,x2,y2,x3,y3,x4,y4,d;

int main(int argc, char const *argv[])
{
	cin>>x1>>yx1>>x2>>y2;
	if(x1==x2)
	{
		d=abs(y2-yx1);
		cout <<x1-d<<" "<<yx1<<" "<<x2-d<<" "<<y2;
	}
	else if(yx1==y2)
	{
		d=abs(x2-x1);
		cout <<x1<<" "<<yx1-d<<" "<<x2<<" "<<y2-d;	
	}
	else if(abs(x1-x2)==abs(y2-yx1))
		cout <<x1<<" "<<y2<<" "<<x2<<" "<<yx1;
	else
		cout <<-1;
	return 0;
}