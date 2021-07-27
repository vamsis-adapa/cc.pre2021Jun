#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;

int prime[11]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};


int func()
{
    ll n;
    cin>>n;
    ll vals[n];
    for(int i =0; i<n; i++)
        cin >> vals[i];
    map<int,int> check;
    vector<int> ans(n,0);
    int cou = 0;
    vector<vector<int>> storage(11);
    for ( int i = 0; i<n; i++)
    {
        for (int j = 0 ; j<11; j++)
        {
            if (!(vals[i]%prime[j]))
            {
                // storage[j].push_back(i);
                if (check.find(j)==check.end())
                {
                    cou++;
                    check.insert(make_pair(j, cou));
                    ans[i]= cou;
                }
                else 
                {
                    ans[i]= (check.find(j))->second;
                }
                break;
            }
        }
    }
    cout<< cou<<endl;
    for ( int i = 0; i< n; i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<< endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while(t--)
    {
        func();
    }
    return 0;
}