#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define max 55

int n,m,a[max][max], b[max][max],num=0, l[max*max],r[max*max],fl=1;  

int main()
{
	cin >>n>>m;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (a[i][j]==1&&a[i+1][j+1]==1&&a[i+1][j]&&a[i][j+1]==1)
			{
				b[i][j]=1;
				b[i+1][j+1]=1;
				b[i+1][j]=1;
				b[i][j+1]=1;
				l[num]=i;
				r[num]=j;
				num++;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if(a[i][j]!=b[i][j])
				fl=0;
		}
	}	

	if(fl==0)
		cout << -1;
	else
	{
		cout << num<<endl;
		for (int i = 0; i < num; ++i)
		{
			cout << l[i]<< " "<< r[i]<<endl;
		}
	}
	return 0;
}
 