#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int tom,i;
		cin>>tom;
		if(tom%2!=0)
		{
			cout<<tom/2<<endl;
			
		}
		else{
			if(tom==2 ||tom==4)
			{
				cout<<"0\n";
			}
			else if(tom==8)
			{
				cout<<"0\n";
			}
			else if(tom%4==2)
			{
				cout<<tom/4<<endl;
			}
			
			else if(tom%8!=0 )
			{
				cout<<tom/8<<endl;
			}
			else
			{
				for(i=1;i<60;i++)
				{
					 if(tom%((long long int)(pow(2,(double)i)))==(((long long int)(pow(2,(double)i)))/2))
					{
						cout<<tom/((long long int)(pow(2,(double)i)))<<endl;
						break;
					}
				}
				
			}
		}
	}
	return 0;
}
