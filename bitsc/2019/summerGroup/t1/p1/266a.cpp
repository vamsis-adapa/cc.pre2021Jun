#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
char arr[55];

void rem(int k);

int main(int argc, char const *argv[])
{
	int check=1;
	int count=0;
	cin >>n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	while(check!=0)
	{
		check=0;
		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i]==arr[i+1])
			{	
				n--;
				check=1;
				count++; 
				rem(i);
				break;
			}
		}

	}
	cout << count;
	return 0;
}

void rem(int k)
{
	for (int i = k; i < n; ++i)
		arr[i]=arr[i+1];
}