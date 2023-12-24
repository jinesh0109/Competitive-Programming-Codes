#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		map <int ,int>m;
		m[5]=0;
		m[10]=0;
		m[15]=0;	
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int c=1;
		if(arr[0]!=5)
		{
			cout<<"NO\n";
			c=0;
		}
		else{
			m[5]++;
			for(i=1;i<n;i++)
			{
				if(arr[i]==5)
				{
					m[5]++;
				}
				else if(arr[i]==10)
				{
					if(m[5]>0)
					{
						m[5]--;
						m[10]++;
					}
					else{
						cout<<"NO\n";
						c=0;
						break;
					}
				}
				else if(arr[i]==15)
				{
					if(m[10]>0)
					{
						m[10]--;
						m[15]++;
					}
					else if(m[5]>1)
					{
						m[5]=m[5]-2;
						m[15]++;
					}
					else{
						cout<<"NO\n";
						c=0;
						break;
					}
				}
			}
			if(c==1)
			{
				cout<<"YES\n";
			}
		}
		
	}
}
