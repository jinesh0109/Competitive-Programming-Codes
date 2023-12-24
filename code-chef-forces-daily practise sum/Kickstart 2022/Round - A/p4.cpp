#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        ll a,b;
        cin>>a>>b;
        int c=0;
        for(int i=a;i<=b;i++)
        {
          string s=to_string(i);
          ll mul=1,sum=0;
          for(int j=0;j<s.size();j++)
          {
              int temp=s[j]-48;
              mul=mul*temp;
              sum=sum+temp;
          }
          if(mul%sum==0)
          {
              c++;
          }
        }
        cout<<"Case #"<<tt<<": "<<c<<endl;
    }
}
