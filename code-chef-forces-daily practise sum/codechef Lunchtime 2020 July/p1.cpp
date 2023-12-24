#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            long long int n,k,i;
            cin>>n>>k;
            string s;
            for(i=0;i<n;i++)
            {
                long long int d;
                cin>>d;
                if(k>d)
                {
                    s.append("0");
                }
                else{
                   if(d%k==0)
                   {
                    s.append("1");
                   }
                   else{
                    s.append("0");
                   }
                }
            }
            cout<<s<<endl;
        }
}
