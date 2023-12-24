#include<stdio.h>
int main()
{
	int x,y,l,r;
	scanf("%d%d%d%d",&x,&y,&l,&r);
	int i,a=x|y;
	for(i=1;i<=a;i++)
	{
		printf("%d %d %d %d\n",i,(x&i),(y&i),(x&i)*(y&i));
	}
	return 0;
}
