#include<stdio.h>
int main(){
	int w,h,w1,d1,w2,d2;
	scanf("%d%d",&w,&h);
	scanf("%d%d",&w1,&d1);
	scanf("%d%d",&w2,&d2);
	int i;
	for(i=h;i>0;i--)
	{
		w=w+i;
		if(i==d1)
		{
			w=w-w1;
			
		}
		else if(i==d2)
		{
			w=w-w2;
			
		}
		if(w<0)
		{
			w=0;
		}
		
	}
	printf("%d",w);
	return 0;
}
