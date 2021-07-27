#include <bits/stdc++.h>
using namespace std;

#define MAX 100005 //
#define ll long long int

ll n;
ll k, A, B, arr[MAX],foundup, founddown;

ll binPow( ll a, ll b);
ll dest(ll start, ll end);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n>>k>>A>>B;
	for (int i = 1; i <= k; ++i)
		cin>> arr[i];
	sort(arr+1, arr+k+1);
	ll len= binPow(2, n);
	ll ans= dest(1, len);
	cout<< ans;
	return 0;
}


ll binLower(ll key)
{
	ll left=1, right=k, mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(key>arr[mid])
			left=mid+1;
		else if(key<arr[mid])
			right=mid-1;
		else
			break;
	}
	mid--;
	while(arr[mid]>=key&&mid>0)
	{
		mid--;
		founddown++;
	}	
	mid++;
	if(arr[mid]<key)
		mid++;
	return mid;
}

ll binHiger(ll key)
{
	ll left=1, right=k, mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(key>arr[mid])
			left=mid+1;
		else if(key<arr[mid])
			right=mid-1;
		else
			break;
	}
	mid++;
	while(arr[mid]<=key&&mid<=k)
	{
		mid++;
		foundup=1;
	}
	mid--;
	if(arr[mid]>key)
		mid--;
	return mid;
}


ll dest(ll start, ll end)
{
	ll num=0,check=0;
	ll high=binHiger(end);
	ll low=binLower(start);
	if(low>high)
		num=0;
	else
		num=high-low+1;
	foundup=0, founddown=0;
	for (int i = 1; i <= k&&arr[i]<=end; ++i)
	{
		if(arr[i]>=start)
			check++;
	}
	if(num==0)
		return A;
	else if((end-start)==0)
		return B*num;
	else
		return min(B*(end-start+1)*num, dest(start,(start+end)/2)+dest(1+((start+end)/2),end));
}

ll binPow( ll a, ll b)
{
	if (b==0)
		return 1;
	ll ret = binPow(a, b/2);
	if(b%2==0)
		return ret*ret;
	else return ret*ret*a;
}

 