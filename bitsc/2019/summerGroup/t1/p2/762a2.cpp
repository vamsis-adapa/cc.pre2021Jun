#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long int  n,k,cont=0,contk=0;
long long int arr[31622776];

int main(int argc, char const *argv[])
{
	cin >> n >> k;
	long long int  c=(long long int )sqrtl(n);
	for (size_t i = 1; i <= c; ++i)
	{
		if(n%i==0)
		{
			cont++;
			arr[cont]=i;
		}
		if (cont==k)
		{
			cout << i ;
			return 0;
		}
	}
	if(c*c==n)
		contk=1;
	int totnum= 2*cont -contk;
	if(totnum<k)
		cout << -1 ;
	else
		cout<< n/arr[cont-(k-cont-1+contk)];
	
	return 0;
}