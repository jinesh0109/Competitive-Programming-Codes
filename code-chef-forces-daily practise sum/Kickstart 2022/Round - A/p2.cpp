#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(int jj=1;jj<=t;jj++)
    {
        string s;
        cin>>s;
        ll sum=0;
        for(int i=0;i<s.size();i++)
        {
            int temp=s[i]-48;
            sum+=temp;
            sum=sum%9;
        }
        int rem=9-sum,flag=1;
        string s1="";
        if(sum==0)
        {
            cout<<"Case #"<<jj<<": ";
            cout<<s[0]<<'0';
            for(int j=1;j<s.size();j++)
            {
                cout<<s[j];
            }
            cout<<"\n";
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            int temp=s[i]-48;
            if(temp>rem)
            {
                if(flag==1)
                {
                    s1+=to_string(rem);
                    s1+=s[i];
                    flag=0;
                }
                else{
                    s1+=s[i];
                }

            }
            else{
                s1+=s[i];
            }
        }
        if(flag==1)
        {
            s1+=to_string(rem);
        }
        cout<<"Case #"<<jj<<": "<<s1<<endl;

    }
}
