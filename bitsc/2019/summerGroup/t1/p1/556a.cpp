#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,cot=0;
char arr[200005];

int main(int argc, char const *argv[])
{
	cin >> n;
	char prev,cur;
	arr[0]='3';
	cin >>arr[1];
	cur=arr[1];
	for (int i = 2; i <= n; ++i)
	{
		cin >> arr[i-cot];
		prev=cur;
		cur=arr[i-cot];
		if(prev!=cur&&prev!='3')
		{
			cot+=2;
			cur=arr[i-cot];
		}
	}
	cout<< n-cot;
	return 0;
}