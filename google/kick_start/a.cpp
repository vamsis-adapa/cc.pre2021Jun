#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int budget;
int arr[1000000];

int main()
{
    int k =1;
    cin >> t;
    while (t)
    {
        cin>> n>>budget;
        for(int i =0; i<n; i++)
        {
            cin >>arr[i];
        }

        sort(arr, arr+n);
        int i=0;
        int cost =0;
        while(i<n)
        {
            cost+=arr[i];
            if (cost>budget)
            {
                cost-=arr[i];
                break;
            }
            i++;
        }
        t--;
        cout<<"Case #"<<k<<": "<<i<<endl;
        k++;
    }    
    return 0;
}