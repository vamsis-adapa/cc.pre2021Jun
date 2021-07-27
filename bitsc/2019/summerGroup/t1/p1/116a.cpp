#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, max=0, a,b, cap=0;
	cin >> n;
	while(n!=0)
	{
		n--;
		cin >>a >>b;
		cap=cap-a+b;
		if(cap>max)
			max=cap;
	}
	cout << max;
	return 0;
}