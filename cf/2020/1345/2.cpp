#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count =0;
        while( n>=2)
        {
            int layer =0;
            int layer_c = 3*layer +2;
            while((n- layer_c)>=0)
            {
                n = n-layer_c;
                layer++;
                layer_c =3*layer +2;
            }
            count++;
        }
        cout<< count<<endl;
    }
    return 0;
}
