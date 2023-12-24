#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,len;
        cin>>n;
        string s;
        cin>>s;
        if(s=="2020")
        {
            cout<<"YES\n";
            continue;
        }
        int flag=1;
        for ( i = 0; i < n; i++)
        {
              for (len = 1; len <= n - i; len++)
              {

                     string s2=s.substr(0,i)+s.substr(i+len);
                     if(s2=="2020")
                     {
                         cout<<"YES\n";
                         flag=0;
                         break;
                     }
              }
              if(flag==0)
                break;

        }
        if(flag==1)cout<<"NO\n";

    }
}

