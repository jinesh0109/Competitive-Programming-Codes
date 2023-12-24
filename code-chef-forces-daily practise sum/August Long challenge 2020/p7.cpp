#include<bits/stdc++.h>
#define ll long long int
#pragma GCC optimize "trapv"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,k,i;
        cin>>n>>c>>k;
        ll arr[c];


        for(i=0;i<c;i++)arr[i]=0;
        for(i=0;i<n;i++)
        {
            ll a,b;
            int c1;
            cin>>a>>b>>c1;
            arr[c1-1]++;
        }
        int v[c];
        for(i=0;i<c;i++)
        {
            cin>>v[i];
        }
        ll sum1=0;
        int aa;
        if(v[0]!=0)
        {
            aa=k/v[0];
        }
        else if(v[0]==0 && k!=0)
        {
            cout<<"0\n";
            continue;
        }
        else if(k==0 && v[0]==0)
        {
            for(i=0;i<c;i++)
            {
                if(arr[i]>=3)
                {
                    sum1+=(arr[i]*(arr[i]-1)*(arr[i]-2))/6;
                }
            }
            cout<<sum1<<endl;
            continue;
        }
        //cout<<v<<endl;



        ll max1=0;
        int temp;

        while(aa--)
        {
            max1=0;
            for(i=0;i<c;i++)
            {
                if(arr[i]>max1)
                {
                    max1=arr[i];
                    temp=i;
                }
            }
            if(max1<=2)
            {
                cout<<"0\n";
                break;
            }
            arr[temp]--;

        }
        if(max1<=2)continue;




        ll sum=0;

        for(i=0;i<c;i++)
        {
            if(arr[i]>=3)
            {
                sum+=(arr[i]*(arr[i]-1)*(arr[i]-2))/6;
            }
        }
        cout<<sum<<endl;
    }
}
