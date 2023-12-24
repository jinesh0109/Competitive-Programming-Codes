#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,p,k,i;
        cin>>n>>x>>p>>k;
        ll arr[n+1];
        arr[0]=-1;
        for(i=1;i<=n;i++)cin>>arr[i];
        sort(arr,arr+n+1);
        if(k>p)
        {
            if(arr[p]==x)
            {
                cout<<"0\n";
                continue;
            }
            else if(arr[p]<x)
            {
                cout<<"-1\n";
                continue;
            }
            else{
                arr[k]=x;
                sort(arr,arr+n+1);
                ll index=1;
                for(i=1;i<=p;i++)
                {
                    if(arr[i]==x)
                        index=i;
                }
                cout<<abs(p-index)+1<<endl;
                continue;
            }
        }
        else if(k<p)
        {
            if(arr[p]==x)
            {
                cout<<"0\n";
                continue;
            }
            else if(arr[p]>x)
            {
                cout<<"-1\n";
                continue;
            }
            else if(arr[p]<x){
                arr[k]=x;
                sort(arr,arr+n+1);
                ll index=1;
                for(i=p;i<=n;i++)
                {
                    if(arr[i]==x)
                    {
                        index=i;
                        break;
                    }

                }
                cout<<abs(p-index)+1<<endl;
                continue;
            }
        }
        else if(p==k)
        {
            if(arr[p]==x)
            {
                cout<<"0\n";
                continue;
            }
            else{
                arr[p]=x;
                sort(arr,arr+n+1);
                ll index=1;
                int flag=1;
                for(i=1;i<=n;i++)
                {
                    if(i>p)
                    {
                        if(arr[i]==x)
                        {
                            index=i;

                            break;
                        }
                    }
                    else if(i<p)
                    {
                        if(arr[i]==x)
                        {
                            index=i;

                        }
                    }
                    else if(i==p)
                    {
                        if(arr[i]==x)
                        {
                            cout<<"1\n";

                            //cout<<"Hello6\n";
                            flag=0;
                            break;
                        }
                    }
                }


                    if(flag==1)
                    cout<<abs(k-index)+1<<endl;
                    //cout<<"Hello5\n";


            }
        }

    }
}
