#include<stdio.h>
#include<string.h>
int main(){
    char str[101],str1[101];
    scanf("%s",str);
    scanf("%s",str1);
    int arr[100],arr1[100],i;
    for(i=0;i<strlen(str);i++)
    {
    	arr[i]=str[i]-48;
    	arr1[i]=str1[i]-48;
    	if(arr[i]!=arr1[i])
    	{
    		printf("1");
		}
		else{
			printf("0");
		}
	}
		
	return 0;
}
