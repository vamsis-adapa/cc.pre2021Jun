#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	int t; 
	cin >>t;
	while(t)
	{
		int n;
		int arr[n];
		cin >>n>>k;
		for(int i =0; i<n; i++)
		{
			cin >> arr[i];
		}
		int dif[n-1];
		vector difp(n-1,0);
		int max=0, maxi=0;
		while(k)
		{
			for (int i =0 ; i<n-1;i++ )
			{
				dif[i]= arr[i+1]-((arr[i+1]-arr[i])/(1+difp[i]))-arr[i];
				if (dif[i]>max)
				{
					max = dif[i];
					maxi = i;
				}
			}
			if(max>1)
				difp[maxi]++;
			k--
		}
		t--;
	}
	return 0;
}