#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[2*n];
		vector <int> v1,v2;
			for(i=0;i<2*n;i++)
			{
				cin>>arr[i];
				if(arr[i]%2==0)
				{
					v1.push_back(i+1);
				}
				else{
					v2.push_back(i+1);
				}

			}
			vector< pair< int, int > > a;
		for(int i = 0; i + 1 < v2.size(); i += 2)
			a.push_back({v2[i], v2[i + 1]});
		for(int i = 0; i + 1 < v1.size(); i += 2)
			a.push_back({v1[i], v1[i + 1]});
		for(int i = 0; i < n - 1; i++)
			cout << a[i].first << " " << a[i].second << endl;


	}
	return 0;
}
