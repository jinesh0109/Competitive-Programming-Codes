#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,i,j,x;
        cin>>r>>c>>x;
        ll arr[r][c],arr1[r][c];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr1[i][j];
            }
        }

        ll a[r*c],b[r*c];
        for(i=0;i<r;i++)
        {

            if(i%2==0)
            {
                for(j=0;j<c;j++)
                {
                    ll c1=i*c+j;
                    a[c1]=arr[i][j];
                    b[c1]=arr1[i][j];
                }
            }
            else{
                for(j=c-1;j>=0;j--)
                {
                    ll c1=i*c+(c-1-j);
                    a[c1]=arr[i][j];
                    b[c1]=arr1[i][j];
                }
            }
        }
        for(i=0;i<r*c;i++)
        {
            if(a[i]!=b[i] && i!=r*c-1)
            {
                ll diff=b[i]-a[i];
                ll temp;
                for(temp=i;temp<i+x;temp++)
                {
                    a[temp]+=diff;
                  //  cout<<a[temp]<<" ";
                }
                //cout<<"\n";
            }
        }

        int flag=1;
        for(i=0;i<r*c;i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }






    }
}

