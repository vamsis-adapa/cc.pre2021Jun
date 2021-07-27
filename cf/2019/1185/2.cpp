#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 15

char c[MAX], d[MAX];
int n, check;

int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> c>> d;
		check=0;
		int o=0,t=0,count1=0, count2=0;
		while((o<strlen(c)&t<strlen(d))&&check==0)
		{	char tec =c[o], ted=d[t];
			if(tec==ted)
			{
				while(tec==c[++o])
					count1++;
				while(ted==d[++t])
					count2++;
				if(count1>count2)
					check=1;
			}
			else
			 	check =1;
		}
		string s=to_string(45);
		if(check==0&&(c[o]==d[t]))
			cout <<"YES"<<"\n";
		else
			cout <<"NO"<<"\n";
	}
	return 0;
}