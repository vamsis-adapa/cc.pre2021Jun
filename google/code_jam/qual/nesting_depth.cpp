#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t, num_tests;

int func()
{
    string s;
    cin >>s;
    int cur =0;
    int len = s.size();
    vector<int>insert(len+1,0);
    // int i =0;
    for (int i = 0;i< len; i++ )
    {
        insert[i]= (s[i]- '0')- cur;
        cur = s[i]- '0';
    }
    string ans;
    for ( int i =0; i< len; i++)
    {
        string c;
        if ( insert[i]>0)
        {
            c = "(";
        }
        else
        {
            c = ")";
        }
        
        for ( int j=0; j<abs(insert[i]); j++)
        {
            ans.append(c);
        }
        ans.append(string(1,s[i]));
    }
    for ( int i =0; i<cur; i++)
    {
        ans.append(")");
    }
    cout<< "Case #"<< num_tests-t<<": "<<ans<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    num_tests= t;
    
    while(t--)
    {
        func();
    }
    return 0;
}