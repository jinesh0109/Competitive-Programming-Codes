#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	char str[500001];
	scanf("%s",str);
	int i,j,c=0,end=strlen(str)-1;
	if(strlen(str)%2==0)
	{
		j=strlen(str)/2;
	}
	else{
		j=(strlen(str)/2)+1;
	}
	char arr[5];
	int arr1[26];
	for(i=0;i<26;i++)
	arr1[i]=0;
	int flag=1;
	for(i=0;i<j;i++)
	{
		if(str[i]!=str[end]||i==end)
		{
			flag=0;
			
			if(strlen(str)%2==0)
			{	
				if(c>3)	
				{
					cout<<"NO";
					return 0;
				}
			}	
			else{
				if(c>4)
				{
					cout<<"NO";
					return 0;
				}
			}	
			if(i!=end)
				{
					arr[c]=str[i];
					arr[c+1]=str[end];
					c=c+2;
				}
				else{
					arr[c]=str[i];
					c++;
				}
				end--;
		}
		else{
			end--;
		}
		
	}
	
	int k,l,cc=0;
	if(flag==1)
	{
		cout<<"YES";
		return 0;
	}
	if(strlen(arr)==1)
	{
		cout<<"YES";
		return 0;
	}
	if(strlen(arr)%2==0)
	{
		if(arr[0]==arr[2] || arr[0]==arr[3])
		{
			if(arr[1]==arr[2] || arr[1]==arr[3])
			{
				
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		else{
			cout<<"NO";
		}
	}
	else
	{			
		for(i=0;i<strlen(arr);i++)
		{
			arr1[arr[i]-97]++;			
		}
		for(i=0;i<26;i++)
		{
			if(arr1[i]==2)
			cc++;
		}
		if(strlen(arr)==3)
		{
			if(cc==1)
			cout<<"YES";
			else
			cout<<"NO";
		}
		else{
			if(cc==2)
			cout<<"YES";
			else
			cout<<"NO";
		}
	}
}
