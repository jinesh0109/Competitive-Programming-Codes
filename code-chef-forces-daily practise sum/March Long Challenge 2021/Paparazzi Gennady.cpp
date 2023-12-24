#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll i,j,k;
        cin>>n;
        double arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll max1=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                double m,c;
                m=(arr[j]-arr[i])/((double(j)-double(i)));
                c=((double(j))*arr[i]-(double(i))*arr[j])/(double(j)-double(i));
                //cout<<m<<" "<<c<<endl;

                int flag=1;
                for(k=i+1;k<j;k++)
                {
                    double y=k*m+c;
                    if(arr[k]>y)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    max1=max(max1,j-i);
                    //cout<<m<<" "<<c<<" "<<i<<" "<<j<<endl;
                }

            }
        }
        cout<<max1<<endl;

    }
}
