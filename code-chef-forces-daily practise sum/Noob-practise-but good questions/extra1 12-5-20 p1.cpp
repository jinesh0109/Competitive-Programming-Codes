#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		int i;
		long long int d,n;
		cin>>n>>d;
		long long int arr[n];
		
		
		for(i=0;i<n;i++)
		{
			cin>>arr[i];	
		}
		
		map<long long int, long long int> arr1;
		for(i=0;i<n;i++)
		{
			arr1[arr[i]-1]++;
		}
		long long int a=arr1.size();
		cout<<"SIze "<<a<<endl;
		for(i=0;i<a;i++)
		{
			cout<<arr1[i]<<endl;
		}
		int c=1;
		for(i=a-1;i>=0;i--)
		{
			if(arr1[i]>0 && i+1<d)
			{
				long long int difference=d-(i+1);
				if(i+1==difference)
				{
					if(arr1[i]>=2)
					{
						cout<<i<<" 1.YES\n";
						c=0;
						break;
					}
					else{
						continue;
					}
				}
				if(arr1[difference-1]>0)
				{
					cout<<i<< " 2.YES\n";
					c=0;
					break;
				}
			}
		}
			if(c==1)
			cout<<"NO\n";
		
		
	}
	return 0;
}
