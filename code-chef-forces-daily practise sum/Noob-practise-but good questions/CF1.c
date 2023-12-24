#include<stdio.h>
#include<math.h>
int main(){
	long long int n,j;
	scanf("%lld",&n);
	long long int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		double result=sqrt(arr[i]);
		long long int x=floor(result);
		long long int c=0;
		if(result-x==0 && result!=1)
		{
			if(x%2==0 )
			{
				printf("NO\n");
			}
			else{
				for(j=3;j<x;j=j+2)
				{
					if(x%j==0)
					{
						c++;
						
					}
				}
				if(c==1)
				{
					printf("YES\n");
				}
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}

