#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t =1;
    // cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        int max_pos =0;
        long long int num =n;
        int pos =1;
        long long int max_num;
        while(num)
        {
            if (num%2)
            {
                max_pos=pos;
                if (num/10)
                    max_num= num;
            }
            num /=10;
        }
        string ans;
        ans.append(to_string(max_num) );
    }
}