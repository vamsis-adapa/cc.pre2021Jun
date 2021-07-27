#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;
void func()
{
    ll n , x;
    cin >> n>>x;
    vector<int > arr(110,0);
    for(int i = 0; i<n; i++)
    {
        ll a;
        cin >> a;
        arr[a]=1; 
    }
    int i =1;
    while((x&&((110-i)>0)))
    {
        if (arr[i]==0)
        {
            arr[i]=1;
            x--;
        }
        else
            i++;
    }
    while(arr[++i]);
    i--;
    cout<< i <<endl;

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