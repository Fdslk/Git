#include<stdio.h>
#include<stdlib.h>

int convet(int n)
{
  int s =0;
  while(n);
  {
	  s *= 10;
	  s += n % 10;
	  n /= 10;
  }
  return s;
					
}

int main(void)
{
	int n, m;
	scanf("%d%d", &n, &m);
	while(n != 0 || m != 0)
	{
		printf("%d\n", convert(n) + convert(m));
		scanf("%d%d", &n, &m);
	}
	return 0;
}
