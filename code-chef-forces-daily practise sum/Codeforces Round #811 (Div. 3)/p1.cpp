#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,h,m;
        cin>>n>>h>>m;
        ll arr[n][2],i;
        ll h1=INT_MAX,m1=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        for(i=0;i<n;i++)
        {
            ll temp,temp1;
            if(arr[i][0]==h)
            {
                temp=0;
                if(arr[i][1]>=m)
                {
                    temp1=arr[i][1]-m;
                }
                else{
                    temp=23;
                    temp1=(60-m)+arr[i][1];
                }
                //cout<<temp<<" hello1 "<<temp1<<endl;
            }
            else if(arr[i][0]>=h)
            {
                temp=arr[i][0]-h-1;
                if(arr[i][1]>=m)
                {
                    temp++;
                    temp1=arr[i][1]-m;
                }
                else{
                    temp1=(60-m)+arr[i][1];

                }


            }
            else{
                temp=(24-h)+arr[i][0]-1;
                if(arr[i][1]>=m)
                {
                    temp++;
                    temp1=arr[i][1]-m;
                }
                else{
                    temp1=(60-m)+arr[i][1];
                }
                //cout<<arr[i][0]<<" "<<h<<" "<<arr[i][1]<<" "<<m<<endl;
                //cout<<temp<<" hello 3"<<temp1<<endl;
            }

            if(temp<h1)
            {
                h1=temp;
                m1=temp1;
            }
            else if(temp==h1)
            {
                if(temp1<=m1)
                {
                    h1=temp;
                    m1=temp1;
                }
            }
        }
        cout<<h1<<" "<<m1<<endl;

    }

}
