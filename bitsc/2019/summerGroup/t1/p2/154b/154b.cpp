#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m,queries;
char operations;
list <int > oper;

int addstatus(int k);
int removestatus(int k);

int main(int argc, char const *argv[])
{
	cin >> n >> m;
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

int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int addstatus(int k)
{
	for(list <int>::iterator it=oper.begin();it!=oper.end();it++)
		{
			if(*it==k)
			{
				printf("Already on\n");
				return 0;
			}
			else if(gcd(k , *it)!=1)
			{
				printf("Conflict with %d\n", *it);
				return 0; 
			}	
		}
		oper.push_front(k);
		printf("Success\n");
		return 1;
}
int removestatus(int k)
{
	for(list <int>::iterator it =oper.begin();it!=oper.end();it++)
	{
		if(*it==k)
		{
			oper.erase(it);
			printf("Success\n"); 
			return 0;
		}
	}
	printf("Already off\n");
	return 0;
}