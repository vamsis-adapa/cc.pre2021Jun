#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t, num_tests;

int func()
{
    ll n;
    cin >>n;
    string an(n,'a' );
    ll  sp=0 ,fp=0;
    ll exit =0;
    int f[2] ={0,0};
    char k[2]={'C','J'};
    pair<pair<int,int>,int>arr[n];
    for ( int i =0 ; i< n ; i++)
    {
        cin >>arr[i].first.first>> arr[i].first.second;
        arr[i].second =i;
        
    }
    sort(arr, arr+n);
    for( int j = 0;j<n ; j++)
    {
        sp = arr[j].first.first;
        fp = arr[j].first.second;
        
        int check =0;
        for ( int i =0 ; i<2; i++)
        {
            if (f[i]<=sp)
            {
                f[i]= fp;
                an[arr[j].second]=k[i];
                check =1;
                break;
            }
        }
        if (!check )
        {
            return 0;
        }
        
    }

    cout<< "Case #"<< num_tests-t<<": "<<an<< endl;
    return 1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    num_tests= t;
    
    while(t--)
    {
        if (!func())
        {
            cout<< "Case #"<<  num_tests -t<<": "<<"IMPOSSIBLE"<< endl;
        }
    }
    return 0;
}