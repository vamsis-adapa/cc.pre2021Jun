#include <stdio.h>

#define MAX 100005

int arr[11];
int n;

int difnum();


int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	int temp[n];
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&temp[i]);
		arr[temp[i]]=arr[temp[i]]+1;
	}
	for (int i = n-1; i >=0; --i)
	{
		if (difnum())
		{
			printf("%d",i+1 );
			return 0;
		}

		arr[temp[i]]=arr[temp[i]]-1;
	}

	
	return 0;
}

int difnum()
{ 
	int c=0;
	int distinct[2];
	int dis[2];
	distinct[1]=distinct[0]=dis[0]=dis[1]=0;

	for (int i = 0; i < 11; ++i)
	{	
		if (c==0)
		{
			if (arr[i]!=0)
			{
				distinct[0]=arr[i];
				dis[0]=dis[0]+1;
				c=1;
			}
		}
		else if (c==1)
		{
			if (arr[i]!=0&&arr[i]==distinct[0])
				dis[0]=dis[0]+1;
			else if (arr[i]!=0&&arr[i]!=distinct[0])
			{
				distinct[1]=arr[i];
				dis[1]=dis[1]+1;
				c=2;
			}
		}
		else if (c==2)
		{
			if (arr[i]!=0&&arr[i]==distinct[0])
				dis[0]=dis[0]+1;
			else if (arr[i]!=0&&arr[i]==distinct[1])
				dis[1]=dis[1]+1;
			else if (arr[i]==0)
				continue;
			else //exit case one if: too
				return 0;
		}		
	}
	//printf("%d %d --- %d %d \n",dis[0],dis[1],distinct[0],distinct[1] );
	if (c==2&&((dis[1]==1&&distinct[1]==1)||(dis[0]==1&&distinct[0]==1)))
		return 1;
	if (c==2&&((dis[0]==1&&distinct[0]-distinct[1]==1)||(dis[1]==1&&distinct[1]-distinct[0]==1)))
		return 1;
	if (c==1&&(dis[0]==1||distinct[0]==1))
		return 1;
	return 0;
}