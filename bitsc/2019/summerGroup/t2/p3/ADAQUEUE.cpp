#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
deque<int>q;
int rev=0,t;
string s;

void reverse();
void pushfront();
void front();
void back();
void pushback();

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		if(s=="toFront")
			pushfront();
		else if(s=="back")
			back();
		else if(s=="reverse")
			reverse();
		else if(s=="push_back")
			pushback();
		else if(s=="front")
			front();
	}
	return 0;
}

void reverse()
{
	rev^=1;
}

void pushfront()
{
	cin>>t;
	if(rev)
		q.push_back(t);
	else q.push_front(t);
}

void pushback()
{
	reverse();
	pushfront();
	reverse();
}

void front()
{
	if(q.empty())
		cout<< "No job for Ada?\n";
	else if(rev)
	{
		cout<<q.back()<<"\n";
		q.pop_back();
	}
	else
	{
		cout<<q.front()<<"\n";
		q.pop_front();
	}
}

void back()
{
	reverse();
	front();
	reverse();
}
