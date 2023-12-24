#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll i,n=s.size(),j;

        ll arr[n+1];
        arr[1]=1;
        ll sum=arr[1];
        ll in=0,val;
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(s[i]!='?')
            {
                in=i;
                val=s[i]-48;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<(n*(n+1))/2<<endl;
            continue;
        }
        string s1=s;
        for(i=1;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(val==1)
                {
                    if(in%2==0)
                    {
                        if(i%2==0)
                        {
                            s1[i]='1';
                        }
                        else{
                            s1[i]='0';
                        }
                    }
                    else
                    {
                        if(i%2==0)
                        {
                            s1[i]='0';
                        }
                        else{
                            s1[i]='1';
                        }
                    }
                }
                else{
                    if(in%2==0)
                    {
                        if(i%2==0)
                        {
                            s1[i]='0';
                        }
                        else{
                            s1[i]='1';
                        }
                    }
                    else
                    {
                        if(i%2==0)
                        {
                            s1[i]='1';
                        }
                        else{
                            s1[i]='0';
                        }
                    }
                }
                arr[i+1]=arr[i];
                sum+=i+1-arr[i]+1;
            }
            else if(s[i]=='1')
            {
                if(s[i-1]=='0')
                {
                    arr[i+1]=arr[i];
                    sum+=(i+1-arr[i]+1);
                }
                else if(s[i-1]=='?')
                {
                    if(s1[i-1]=='1')
                    {

                    int flag1=1,inde;
                    for(j=i-1;j>=0;j--)
                    {
                        if(s[j]=='?')
                        {
                            inde=j;
                        }
                        else
                            break;
                    }
                    arr[i+1]=j+1;
                    sum+=i-j+1;
                    }
                    else if(s1[i-1]=='0')
                    {
                        arr[i+1]=arr[i];
                        sum+=i+1-arr[i]+1;
                    }

                }
                else
                {
                    arr[i+1]=i+1;
                    sum+=1;
                }
            }
            else{
                if(s[i-1]=='1')
                {
                    arr[i+1]=arr[i];
                    sum+=i+1-arr[i]+1;
                }
                else if(s[i-1]=='?')
                {
                    if(s1[i]=='0')
                    {

                    int flag1=1,inde;
                    for(j=i-1;j>=0;j--)
                    {
                        if(s[j]=='?')
                        {
                            inde=j;
                        }
                        else
                            break;
                    }
                    arr[i+1]=j+1;
                    sum+=i-j+1;
                    }
                    else if(s1[i-1]=='1')
                    {
                        arr[i+1]=arr[i];
                        sum+=i+1-arr[i]+1;
                    }
                }
                else
                {
                    arr[i+1]=i+1;
                    sum+=1;
                }
            }
           cout<<arr[i+1]<<" "<<i+1<<" "<<sum<<endl;
        }
        for(i=1;i<n+1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<sum<<endl;
    }
}
