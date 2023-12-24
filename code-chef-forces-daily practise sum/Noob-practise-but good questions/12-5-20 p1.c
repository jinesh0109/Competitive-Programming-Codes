#include <stdio.h>
#include<string.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for( i=0;i<t;i++)
	{
	    char arr[1000];
	    scanf("%s",arr);
	    int arr1[26],arr2[26],j;
	    for(j=0;j<26;j++)
	    {
	    	arr1[j]=0;
	    	arr2[j]=0;
		}
	    for(j=0;j<strlen(arr)/2;j++)
	        {
	            arr1[arr[j]-97]++;
	        }
	    if(strlen(arr)%2==0)
	    {
	        for( j=strlen(arr)/2;j<strlen(arr);j++)
	        {
	            arr2[arr[j]-97]++;
	        }
	    }
	    else{
	        for( j=strlen(arr)/2+1;j<strlen(arr);j++)
	        {
	            arr2[arr[j]-97]++;
	        }
	    }
	    
	    int c=0;
	    for(j=0;j<26;j++)
	    {
	        if(arr1[j]!=arr2[j])
	        {
	            
	            printf("NO\n");
	            c=1;
	            break;
	        }
	        
	    }
	    if(c==0)
	    {
	        printf("YES\n");
	    }
	    
	}
	return 0;
}


