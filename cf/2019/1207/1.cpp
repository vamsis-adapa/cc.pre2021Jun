#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll b, p, f,t,h,c,su,numBurg; 

int main()
{
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> b>> p >> f;
		cin >> h>>c;
		numBurg= b/2;
		su=0;
		if (h>c)
		{
			if(numBurg>p)
			{
				su+= p*h;
				numBurg= numBurg-p;
			}
			else 
			{
				su+=numBurg*h;
				numBurg=0;
			}
			if (numBurg>f)
			{
				su+=c*f;
				numBurg=numBurg- f;
			}
			else
			{
				su+=numBurg*c;
				numBurg=0;
			}
		}
		else
		{
			if (numBurg>f)
			{
				su+=c*f;
				numBurg-=f;
			}
			else
			{
				su+=numBurg*c;
				numBurg=0;
			}
			if(numBurg>p)
				{
					su+= p*h;
					numBurg= numBurg-p;
				}
			else 
			{
				su+=numBurg*h;
				numBurg=0;
			}
		}
		cout << su<< endl;
	}
	return 0;
}
 