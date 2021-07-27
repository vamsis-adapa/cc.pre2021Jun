#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define max 55

ll n, m;
int a[max][max], b[max][max], num=0,sets=1;
int l[max], r[max];

int main()
{
	cin >> n>>m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			cin >> a[i][j];

	for (int i = 1; (i <=n); ++i)
	{
		for (int j = 1; (j <= m); ++j)
		{
			if(a[i][j]==1&&a[i+1][j]==1&&a[i+1][j+1]==1&&a[i][j+1]==1)
			{
				b[i+j][j]=1, b[i+1][j+1]=1, b[i][j+1]=1,b[i][j]=1;
				l[num]=i, r[num]=j;
				num++;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m&&(sets==1); ++j)
		{
			if(a[i][j]!=b[i][j])
				sets=0;
		}
	}

	if (sets==0)
		cout << -1;
	else 
	{
		cout << num<<endl;
		for (int i = 0; i < num; ++i)
			cout << l[i]<<" "<< r[i]<<endl;
	}
	return 0;
}
 