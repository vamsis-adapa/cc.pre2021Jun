#include<bits/stdc++.h>

using namespace std;

#define maxi  200005

int a[maxi];
int b[maxi];
int x[maxi];

int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    for (int i =0; i<n; i++)
    {
        cin>>b[i];
    }

    for (int i = 0 ; i<n ;i++)
    {
        if (b[i]==0)
        {
            a[i]=x[i];
            x[i+1]=x[i];
        }
        else if (b[i]<0)
        {
            a[i]= x[i]+b[i];
            x[i+1]= x[i];
        }
        else
        {
            {
                a[i]=x[i]+b[i];
                x[i+1]= a[i];
            }
        }
        
    }

    for (int i =0 ; i<n; i++)
    {
        cout<< a[i]<<" ";
    }



    return 0;
}
