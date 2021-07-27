#include<bits/stdc++.h>
using namespace std;
string s;
#define ll long long int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin >>t;
    while(t--)
    {
        ll buf; 
        cin >>buf;
        cin >>s;
        string res;
        string res1;
        string res2;
        int check =0;
        for(ll i=0;i<buf; i++ )
        {
            // cout<<s[i];
            if (!check)
            {
                if (s[i]=='2')
                {
                    res.append("1");
                }
                else if(s[i]=='0')
                {
                    res.append("0");
                }
                else
                {
                    res1.append("1");
                    res2.append("0");
                    check =1;
                }
            }
            else
            {
                res1.append("0");
                res2.append(string(1,s[i]));
            }
        }
        cout<<res<<res1<<endl;
        cout<<res<<res2<<endl;
    } 
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while(t--)
    {
        
    }
    return 0;
}