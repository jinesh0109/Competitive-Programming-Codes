#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,c0=0,c1=0,p;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')c1++;
            else c0++;;
        }
        p=n/k;
        if(c1%p==0 && c0%p==0){
            string s1="";
            for(i=0;i<c0/p;i++)
              s1+='0';
            for(i=0;i<c1/p;i++)
              s1+='1';

            string s2=s1;
            reverse(s2.begin(),s2.end());
            for(i=0;i<p;i++)
            {
                if(i%2==0)cout<<s1;
                else cout<<s2;
            }
            cout<<"\n";
        }
        else
        {
            cout<<"IMPOSSIBLE\n";
        }

    }
}
