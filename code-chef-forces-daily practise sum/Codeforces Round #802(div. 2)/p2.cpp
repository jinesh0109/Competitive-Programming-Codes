#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        string s;
        cin>>n>>s;
        int f=1;
        if(s[0]=='9')
        {
            f=0;
        }
        if(f==0)
        {
            string s1="";
            int ff=0;
            for(i=n-1;i>=0;i--)
            {
                int temp=s[i]-'0';
                temp+=ff;
                if(temp<2)
                {
                    s1+=1-temp+'0';
                    ff=0;
                }
                else{
                    s1+=11-temp+'0';
                    ff=1;
                }
            }
            reverse(s1.begin(),s1.end());
            cout<<s1<<endl;
        }
        else{
            string s1="";
            for(i=0;i<n;i++)
            {
                int temp=s[i]-'0';
                s1+=9-temp+'0';
            }
            cout<<s1<<endl;
        }


    }
  }



