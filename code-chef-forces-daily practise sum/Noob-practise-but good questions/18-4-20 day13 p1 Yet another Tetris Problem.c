#include<stdio.h>
int main(){
	int j,t,i;
	scanf("%d",&t);
	
	for(j=0;j<t;j++)
	{
		int n,c=0,c1=0;
	    scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]%2==0)
			{
				c++;
			}
			else{
				c1++;
			}
		}
		if(c>0 && c1>0)
		{
			printf("NO\n");
		}
		else if(c==0 && c1==0)
		{
			printf("NO\n");
			
		}
		else{
			printf("YES\n");
		}
		
	}
	return 0;
}
