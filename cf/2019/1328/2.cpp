#include <bits/stdc++.h>

using namespace std;


#define ll long long int


ll n, t, k;


int main(int argc, char const *argv[])
{
	cin >> t;
	ll maxk=1;
	ll count=1;
	ll arr[100000];
	ll iter =1;
	arr[1]=1;
	while(t--)
	{	
		cin>>n>>k;
		while(maxk<=k)
		{
			maxk +=count;
			count++;
			arr[++iter]=maxk;
		}
		int fir=1;
		for(int i =1; i<=k ; i++)
		{
			if(arr[i]<=k)
			{
				fir=i;
			}
			else break;
		}
		int tar = k - arr[fir];
		string res;
		for (int a=0; a<n-fir-1;a++)
		{
			res.append("a");
		}
		res.append("b");
		for(int a =0; a<fir -tar-1; a++)
		{
			res.append("a");
		}
		res.append("b");
		for (int i = 0; i < tar; ++i)
		{
			res.append("a");
		}
		cout<< res<<endl;
	}	
	return 0;
}