#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;
ll num_test;

int func()
{
    int n;
    cin >> n;
    vector<vector<int>>arr(n, vector<int> (n,0));
    int trace=0, ans1=0, ans2=0;
    for ( int i =0; i<n; i++)
    {
        vector<int> check_arr(n+1,0);
        int check=0;
        for (int j=0; j<n; j++)
        {
            cin >>arr[i][j];
            if (check_arr[arr[i][j]])
            {
                check++;
            }
            check_arr[arr[i][j]]++;
            if(i==j)
            {
                trace += arr[i][i];
            }
        }
        if (check)
        {
            ans1++;
        }
    }
    for ( int i =0; i<n; i++)
    {
        vector<int> check_arr(n+1,0);
        int check=0;
        for (int j=0; j<n; j++)
        {
            // cin >>arr[i][j];
            if (check_arr[arr[j][i]])
            {
                check++;
            }
            check_arr[arr[j][i]]++;
        }
        if (check)
        {
            ans2++;
        }
    }
    cout<< "Case #"<< t- num_test<<": "<<trace<<" "<< ans1<< " "<<ans2<< endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    num_test=t;


    
    while(num_test--)
    {
        func();
    }
    return 0;
}