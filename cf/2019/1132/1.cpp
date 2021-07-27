#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;
int arr[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while(t--)
    {
        int k;
        vector<vector<int>>stor(11);
        cin >>k;
        int lis[k];
        int te =k;
        while(k--)
        {
            ll a;
            cin>> a;
            for (int i =0; i<11; i++)
            {
                if (!(a%arr[i]))
                {
                    stor[i].push_back(a);
                    cout<< i<<"  "<< stor[i][stor[i].size()-1]<<endl;
                    break;
                }
            }
        }
        cout<< "jkj"<<endl;
        int cou =0;
        for (auto iter = stor.begin(); iter!=stor.end(); iter++)
        {
            cout<< "hot"<<endl;
            if((*iter).empty())
            {
                cout<<"colld"<<endl;
                continue;
            }
            else
            {
                cout<< "choco"<<endl;
                cou++;
                cout<<iter->size();
                for (auto iter2 = (*iter).begin(); iter2 != (*iter).end(); iter2++ )
                {
                    cout<< *iter2<<endl;
                    lis[*iter2] = cou;
                }
                cout<< "fire"<<endl;
            }
        }
        cout<<cou<<endl;
        for (int i =0; i<te; i++)
        {
            cout<< lis[i]<<" ";
        }
        cout<<endl;
       


    }
    return 0;
}