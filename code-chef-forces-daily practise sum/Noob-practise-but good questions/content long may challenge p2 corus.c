#include<stdio.h>
#include<string.h>
int main(){
	 int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		  int n,i,j;
		  int q;
		scanf("%d %d",&n,&q);
		long long int arr[q];
		 int arr1[26];
		char str[n];
		scanf("%s",str);
		for(i=0;i<26;i++)
		{
			arr1[i]=0;
		}
		for(i=0;i<strlen(str);i++)
		{
			arr1[str[i]-97]++;
		}
		for(i=0;i<q;i++)
		{
			scanf("%lld",&arr[i]);
			
			  long long int sum=0;
			for(j=0;j<26;j++)
			{
				if(arr1[j]-arr[i]>0)
				{
					sum=sum+arr1[j]-arr[i];
				}
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}
