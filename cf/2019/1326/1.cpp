#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num;
    cin >>num;

    while(num)
    {
        string k;
        cin>>n;

        if (n==1)
        {
            cout<< -1<<endl;
        }
        else if (!((n-1)%3))
        {
            for (int i = 0; i<n-2; i++)
            {
                // k.app
                k.append("2");
            }
            k.append("43");
        }
        else 
        {
            for (int i =0;i<n-1; i++)
            {
                k.append("2");
            }
            k.append("3");
        }
        cout<< k<<endl;
        num--;
    }
    return 0;

}