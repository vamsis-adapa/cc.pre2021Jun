#include<bits/stdc++.h>
using namespace std;


int t;
int num_piles;
int num_plates;
int req;



int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    cin>> t;
    int k =t;
    int ansnum= k-t+1;
    while(t)
    {
        vector<vector<int>>arr;
        cin>> num_piles>>num_plates>>req;
        // cout<< num_piles<<num_plates<<req<<endl;
    
        for(int i =0; i<num_piles; i++)
        {
            vector<int>vec;
            for (int k=0; k<num_plates;k++)
            {
                int temp;
                cin >>temp;
                vec.push_back(temp);
            }
            arr.push_back(vec);
        }
        //finished input
        int sum=0;
        while(req)
        {
            cout<<"----"<<endl;////////////////////
            vector<int> greed(num_piles,0);
            int max=0, maxi=0,maxtop=0;
            for(int i=0; i<num_piles; i++)
            {
                for( int k=0; k<req; k++)
                {
                    if (arr[i].size()>k)
                    {
                        greed[i]+=arr[i][k];
                        cout<< arr[i][k]<<" ";//////////////////////
                    }
                }
                cout<<endl;/////////////

                if (greed[i]>max)
                {
                    maxi = i;
                    max=greed[i];
                    maxtop=arr[i][0];
                }
                else if(greed[i]==max)
                {
                    if (arr[i][0]>maxtop)
                    {
                        max = greed[i];
                        maxtop=arr[i][0];
                        maxi =i;
                    }
                }
            }
            sum+=arr[maxi][0];
            arr[maxi].erase(arr[maxi].begin());
            req--;
        
        }
        cout<< "Case #"<<ansnum<<": "<<sum<<endl;
        ansnum++;
        t--;
    }
        
    return 0;
}