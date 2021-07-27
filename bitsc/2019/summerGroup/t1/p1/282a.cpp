#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,x=0;
char a,s,d;

int main(int argc, char const *argv[])
{
	cin >> n;
	while(n!=0)
	{
		n--;
		scanf(" %c %c %c", &a,&s,&d);
		if(a=='+'||s=='+'||d=='+')
			x++;
		else 
			x--;
	}
	cout <<x;
	return 0;
}