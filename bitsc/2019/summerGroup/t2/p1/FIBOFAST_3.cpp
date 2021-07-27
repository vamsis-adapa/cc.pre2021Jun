#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define max 1000000007


ll mat[2][2],fib[2][2],t,n,temp[2][2];

ll genFib(ll b);

int main()
{
	mat[0][0]=1,mat[0][1]=1,mat[1][0]=1,mat[1][1]=0;

	cin >>t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		genFib(n);

	}

	return 0;
}

void matMulFxF(ll fib[2][2])
{
	temp[0][0]=fib[0][0]*fib[0][0]+fib[0][1]*fib[1][0];
	temp[1][0]=fib[1][0]*fib[0][0]+fib[1][1]*fib[1][0];
	temp[1][1]=fib[1][0]*fib[0][1]+fib[1][1]*fib[1][1];
	temp[0][1]=fib[0][0]*fib[0][1]+fib[0][1]*fib[1][1];
	fib[0][1]=temp[0][1]%max;
	fib[0][0]=temp[0][0]%max;
	fib[1][0]=temp[1][0]%max;
	fib[1][1]=temp[1][1]%max;
	return;
}
void matMulFxM(ll fib[2][2])
{
	temp[0][0]=fib[0][0]*mat[0][0]+fib[0][1]*mat[1][0];
	temp[1][0]=fib[1][0]*mat[0][0]+fib[1][1]*mat[1][0];
	temp[1][1]=fib[1][0]*mat[0][1]+fib[1][1]*mat[1][1];
	temp[0][1]=fib[0][0]*mat[0][1]+fib[0][1]*mat[1][1];
	fib[0][1]=temp[0][1]%max;
	fib[0][0]=temp[0][0]%max;
	fib[1][0]=temp[1][0]%max;
	fib[1][1]=temp[1][1]%max;
	return;
}

ll matBin(ll F[2][2],ll b)
{
	if(b==0)
		return 1;
	if(b==1)
		return 1;
	matBin(F,b/2);
	if (b%2==0)
	{
		matMulFxF(F);
		return 1 ;
	}
	else 
	{
		matMulFxF(F);
		matMulFxM(F);
		return 1;
	}
}

ll genFib(ll b)
{
		fib[0][0]=1,fib[0][1]=1,fib[1][0]=1,fib[1][1]=0;
		matBin(fib,b);
		cout<< fib[0][1]<<endl;
		return 0;

}
