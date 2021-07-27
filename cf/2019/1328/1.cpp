#include<bits/stdc++.h>
using namespace std;

long long int t,a,b;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cin >>t;
    while(t)
    {
        cin >>a>>b;
        long long int temp = a%b;
        if (a%b)
        {
            temp = b-temp;
        }
        cout<< temp<<endl;
        t--;
    }
    return 0;
}