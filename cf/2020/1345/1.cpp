#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >>t;

    int n,m;
    while(t--)
    {
        cin >> n>>m;
        if (n*m==n|| n*m ==m|| n*m ==4)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<< endl;
    }
    return 0;
}
