#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,j,p;
        cin>>n>>x;
        ll arr[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        i=1;
        while(i<=n)
        {
            if(x>0)
            {
                ll temp;
                int flag2=1;
                for(p=0;p<=31;p++)
                {
                    temp=pow(2,p);
                    if(arr[i]<temp)
                    {
                        flag2=0;
                        arr[i]=arr[i]-(temp/2);

                        x--;
                        int flag=1;
                        for(j=i+1;j<=n;j++)
                        {
                            if(arr[j]<temp && arr[j]>temp/2)
                            {
                                arr[j]=arr[j]-(temp/2);

                                flag=0;
                                break;
                            }
                            else if(arr[j]==temp)
                            {
                                arr[j]=arr[j]-(temp);
                                flag=0;
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            arr[n]=arr[n]^temp/2;
                        }
                        if(arr[i]==0)
                        {
                            i++;
                        }
                        //int k;
                        //for(k=1;k<=n;k++)
                        //{
                        //   cout<<arr[k]<<" ";
                        //}
                        //cout<<"\n";

                    }
                    else if(arr[i]==temp)
                    {
                        flag2=0;
                        arr[i]=arr[i]-(temp);
                        x--;
                        int flag=1;
                        for(j=i+1;j<=n;j++)
                        {
                            if(arr[j]>temp && arr[j]<2*temp)
                            {
                                arr[j]=arr[j]-(temp);
                                flag=0;
                                break;
                            }
                            else if(arr[j]==temp)
                            {
                                arr[j]=arr[j]-(temp);
                                flag=0;
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            arr[n]=arr[n]^temp;
                        }
                        if(arr[i]==0)i++;
                        int k;
                        //for(k=1;k<=n;k++)
                        //{
                        //   cout<<arr[k]<<" ";
                        //}
                        //cout<<"\n";

                    }
                    if(flag2==0)break;
                }


            }
            else{
                break;
            }
            if(i==n)break;
        }
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}
