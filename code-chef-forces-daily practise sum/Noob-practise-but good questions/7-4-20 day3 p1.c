#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d %d",&n,&k);
	int arr[n],arr1[n];
     for(i=0;i<n;i++)
	 {
	 	scanf("%d %d",&arr[i],&arr1[i]);
	}
	int t,t1;
		for(i=0;i<n;i++)
		{
			
			for(j=i+1;j<n;j++)
			{
				if(arr[j]==arr[i])
				{
					if(arr1[j]<arr1[i])
                      {
                      	t=arr1[i];
                      	arr1[i]=arr1[j];
	                    arr1[j]=t;
                   }
				}
				else if(arr[j]>arr[i])
				{
					t=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=t;
					t1=arr[i];
					arr[i]=arr[j];
					arr[j]=t1;
				}
			}
		}
		int c=0;
		for(i=0;i<n;i++)
		{
			if(arr[k-1]==arr[i] && arr1[k-1]==arr1[i])
			c++;
		}
		printf("%d",c);
	
	return 0;
}
