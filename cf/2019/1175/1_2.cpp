#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 105

int num;
long long int n[MAX], k[MAX];


int main(int argc, char const *argv[])
{
	int count;
	cin >> num;
	for (int i = 0; i < num; ++i)
		cin >> n[i]>> k[i];
	for (int i = 0; i < num; ++i)
	{
		cout << log(n[i])<<"  "<< log(k[i])<< "\n";
		printf("%d\n",count );
	}

	return 0;
}
 

 