#include "stdio.h"

int exists(int *dis,int num, int k);

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int dis[n];
	int num=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if(!exists(dis, num, arr[i]))
		{
			dis[num]=arr[i];
			num++;
		}
	}
	int sum=0;
	for (int i = 0; i < num; ++i)
		sum+=dis[i];
	int av=sum/num;

	int bak=0;
	if(num==2)
	{
		bak=dis[1]-dis[0];
	}

	if ((av*num)!=sum&& num!=2)
		{
			printf("-1");
			return 0;
		}
	else if (av*num!=sum&& num==2)
	{
		printf("%d",bak);
		return 0;
	}
	int med=0;
	for (int i = 0; i < num; ++i)
	{
		int tmp= av-dis[i];
		if (tmp)
		{
			if(med!=0&&(med!=tmp)&&(med!=(-1)*tmp))
				{	
					printf("-1");/* code */
					return 0;	
				}
			else if(med==0)
				med=tmp;
		}
	}
	if (bak<med&&num==2)
	{
		printf("%d",bak );
	}
	else
		printf("%d\n",med );

	return 0;
}

int exists(int *dis,int num, int k)
{
	for (int i = 0; i < num; ++i)
	{
		if(k==dis[i])
			return 1;
	}
	return 0;
}