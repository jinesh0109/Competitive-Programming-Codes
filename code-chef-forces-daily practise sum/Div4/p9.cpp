#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,c,i,j;
		cin>>n>>c;
		vector<int>v;
		for(i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		int low=1,high=v[n-1]-v[0];
		while(low<=high)
		{
			int mid=(low+high)/2;
			int cowsPlaced=v[0];
			int c=1;
			for(j=1;j<n;j++)
			{
				if(v[i]-cowsPlaced>=mid)
				{
					c++;
					cowsPlaced=v[i];
				}
			}
			if(c>=mid)
			{
				low=mid+1;
			}
			else
				high=mid-1;
		}
		cout<<high<<endl;



	}
}
