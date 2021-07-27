#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, k, arr[55],cot=0;

int main(int argc, char const *argv[])
{
	cin >> n>>k;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	for (int i = 0; i < n; ++i)
		if (arr[i]>0&&arr[i]>=arr[k-1])
			cot++;
	cout<< cot;
	return 0;
}