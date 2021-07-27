#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string a, b;

int main(int argc, char const *argv[])
{
	cin >>a;
	cin >>b;
	int c= a.compare(b);

	if(!c)
		cout << a;
	else 
		cout << 1;

	return 0;
}