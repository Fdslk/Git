#include <stdio.h>
#define MAX 1000010
int a[MAX]={0};
int main()
{
    int i,j,n,m = 0;
   	for(i = 2; i <MAX; i++)
	{
		if(a[i] == 0)
		{
		  m++;
		  for(j = i; j < MAX; j += i)
		  a[j] = m;
		}
	}
	while(scanf("%d",&n) != EOF)
	{
    	printf("%d\n",a[n]);
	}
	return 0;
}


