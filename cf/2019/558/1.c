#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,m;
    scanf("%d%d",&n,&m);
    if (m>n/2)
    	printf("%d",n-m);
    else if (m==0||m==1)
    	printf("1");
    else if(m<=n/2)
    	printf("%d",m );
    return 0;
}
