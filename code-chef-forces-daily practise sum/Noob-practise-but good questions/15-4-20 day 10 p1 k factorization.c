#include<stdio.h>


int main(){
	long int n,k,i,j,m;
long int arr[k],c=0;
	  scanf("%ld %ld",&n,&k);
	   m=n;
	for(i=m;c<k;i=i/j)
	{
		if(i==1 && c+1<=k)
		{
			printf("-1");
			exit(0);
		}
	   for(j=2;j<=m;j++)
	    {
		
	
			if(c+1==k){
			
			    arr[c]=i;
			    c++;
			    
			    break;
		     }
		     else if(i%j==0){
		     	
		        arr[c]=j;
			    c++;
			    
			    break; 	
			 }
		}
     	
	}
	for(i=0;i<k;i++)
	{
		printf("%ld ",arr[i]);
	}
	return 0;
}
