#include<stdio.h>
int main(){
	int p1,p2,p3,p4,a,b,i,j,k,l,rep;
	scanf("%d%d%d%d%d%d",&p1,&p2,&p3,&p4,&a,&b);
	int a1[4],count=0;
	a1[0]=p1,a1[1]=p2,a1[2]=p3,a1[3]=p4;
	int arr[24],arr1[24],arr2[24],arr3[24];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				for(l=0;l<4;l++)
				{
					if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
					{
						arr[count]=a1[i];
						arr1[count]=a1[j];
						arr2[count]=a1[k];
						arr3[count]=a1[l];
						count++;
					}
				}
			}
		}
	}
	
	
	int finalc=0;
	for(rep=a;rep<=b;rep++)
	{
		count=0;
		for(i=0;i<24;i++)
		{
			if(((((rep%arr[i])%arr1[i])%arr2[i])%arr3[i])==rep )
			{
			   count++;	
			   if(count==7)
				{	
					finalc++;
					break;
				}
			}
			
		}
		
	}
printf("%d",finalc);
	return 0;
}
