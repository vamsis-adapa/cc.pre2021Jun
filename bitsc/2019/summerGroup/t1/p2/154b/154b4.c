#include<stdio.h>
#include <math.h>

#define MAX 100005

int n, m,queries;
char operations;
int arr[MAX];
int gc[MAX];
int prime[MAX];
int arra[MAX];


int addstatus(int k);
int removestatus(int k);

int main(int argc, char const *argv[])
{

	scanf("%d%d", &n, &m);
	prime[1]=1;
    prime[0]=1;
    for (int i = 4; i <=n; i=i+2)
    {
    	prime[i]=1;
    }
	for (int i = 3; i <= sqrt(n); i=i+2)
	{
		if(prime[i]==0)
		{
			for(int j=2*i; j<=n;j=j+i)
			{
				prime[j]=1;
			}
		}
	}
	for (int i = 0; i < m; ++i)
	{
		scanf(" %c %d", &operations, &queries);
		if(operations=='+')
			addstatus(queries);
		else
			removestatus(queries);
	}
	return 0;
}

int gcd (int a) {
	for(int i =0; i<n; i++)
	{
		if(prime[i]==0&&a%i==0)
		{
			if (gc[i]==1)
				return i;
		}
	}
	for(int i =0; i<n; i++)
	{
		if(prime[i]==0&&a%i==0)
		{
            gc[i]=1;
            arra[i]=a;
        }
		
	}
	return 0;
}

int addstatus(int k)
{	
	if(arr[k]==1)
	{
		printf("Already on\n");
		return 1;
	}	
        int g=gcd(k);
        if (g)
        {
            printf("Conflict with %d\n", arra[g]);
            return 0;
        }	
	arr[k]=1;
	printf("Success\n");
	return 1;
}
int removestatus(int k)
{
	if(arr[k]==0)
		printf("Already off\n");
	else
	{
		arr[k]=0;
		for(int i =0; i<n; i++)
		{
			if(prime[i]==0&&k%i==0)
			{
				gc[i]=0;
                arra[i]=0;
			}
		}		
		printf("Success\n");
	}
	return 0;
}