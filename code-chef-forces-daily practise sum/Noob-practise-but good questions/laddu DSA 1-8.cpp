#include<iostream>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		int n,i;
		string origin;
		cin>>n>>origin;
		int total=0;
		for(i=0;i<n;i++)
		{
			string activity;
			cin>>activity;
			if(activity=="CONTEST_WON")
			{
				int a;
				cin>>a;
				if(a<=20)
				{
					total=total+300+20-a;
				}
				else{
					total=total+300;
				}
			}
			else if(activity=="TOP_CONTRIBUTOR")
			{
				total=total+300;
			}
			else if(activity=="BUG_FOUND")
			{
				int s;
				cin>>s;
				total=total+s;
			}
			else if(activity=="CONTEST_HOSTED"){
				total=total+50;
			}
		}
		if(origin=="INDIAN")
		{
			total=total/200;
			cout<<total<<endl;
		}
		else{
			total=total/400;
			cout<<total<<endl;
		}
		
	}
	return 0;
}
