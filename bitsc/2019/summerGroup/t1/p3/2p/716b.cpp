#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define max 50004

string  s;
int al[27];
int con=-1;

int check(int qn);
void search();

int main(int argc, char const *argv[])
{
	cin >>s;
	int n=s.length();
	if(n<26)
	{
		cout<< -1;
		return 0;
	}
	int left=0, right =0;
	int set=0,count=1,qn=0;
	while(right !=n&&set==0)
	{
		if(s[right]=='?')
			qn++;
		else
		{
			al[s[right]-'A']++;
		}
		if(count==26&& check(qn))
			set=1;
		else if(count==26)
		{
			right++;
			al[s[left]-'A']--;
			left++;

		}
		else
		{
			right++;
			count++;
		}
	}
	if(set==0)
		cout<<-1;
	else
	{
		for (int i = 0; i < left; ++i)
		{
			if(s[i]=='?')
				cout << 'A';
			else 
				cout << s[i];
		}
		for (int i = left; i <= right; ++i)
		{
			if(s[i]=='?')
			{
				search();
				cout<<(char)(con+'A');
			}
			else cout << s[i];
		}
		for (int i = right+1; i < n; ++i)
		{
			if(s[i]=='?')
				cout << 'Z';
			else 
				cout << s[i];			
		}
	}
	return 0;
}

int check(int qn)
{
	int te=0;
	for (int i = 0; i < 26; ++i)
	{
		if(al[i]>1)
			return 0;
		else if(al[i]==0)
			te++;
	}
	if(qn>=te)
		return 1;
	else return 0;
}

void search()
{
	con++;
	while(al[con]!=0&&con<26)
		con++;
}