#include<iostream>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,j;
		cin>>n;
		 int arr[n];
		for(j=0;j<n;j++)
		{
			cin >>arr[j];
		}
		 int c=1;
		for(j=1;j<n;j++)
		{
			if(arr[j]<arr[j-1])
			{
				c++;
			}
			else{
				arr[j]=arr[j-1];
			}
		}
		cout<< c<< endl;
	}
	return 0;
}
