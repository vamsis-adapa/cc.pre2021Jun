#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,m,arrc[255][255];
char arr[255][255];
int sheep, wolv,s, w,c;

void dfs(int i, int j);
void inBound(int i,int j);
int posBlock(int i,int j);

int main(int argc, char const *argv[])
{
	cin >>n >>m;
	for(int i=1; i<=n;i++)
		for (int j = 1; j <= m; ++j)
			scanf(" %c",&arr[i][j]);
	for (int o = 1; o <=n; ++o)
	{
		for (int u= 1; u < m; ++u)
		{
			if(arrc[o][u]==0&&arr[o][u]!='#')
			{
				s=0, w=0,c=0;
				dfs(o,u);
				if(c==1||(s>w))
					sheep+=s;
				else 
					wolv+=w;
			}
		}
	}
	cout << sheep <<" "<< wolv;
	return 0;
}

void dfs(int i,int j)
{
	if(arrc[i][j]==1)
		return;
	else
		arrc[i][j]=1;
	inBound(i,j);
	if(arr[i][j]=='k')
		s++;
	else if(arr[i][j]=='v')
		w++;
	if(i>1&&posBlock(i-1,j))
		{dfs(i-1,j);}
	if(i<n&&posBlock(i+1,j))
		dfs(i+1,j);
	if(j>1&&posBlock(i, j-1))
		dfs(i,j-1);
	if(j<m&&posBlock(i, j+1))
		dfs(i, j+1);
}

void inBound(int i,int j)
{
	if((i==1)||(i==n)||(j==1)||(j==m))
		c=1;	
}

int posBlock(int i,int j)
{
	if(arrc[i][j]==1)
		return 0;
	if(arr[i][j]=='.'||arr[i][j]=='v'||arr[i][j]=='k')
		return 1;
	else 
		return 0;
}