#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        vector<double> v;
        for(i=0;i<n;i++)
        {
            double temp;
            cin>>temp;
            v.push_back(temp);
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        ll c=100000,c1;
        for(i=0;i<n-1;i++)
        {
            double a=v[i];
            int ind=i;
            for(j=i+1;j<n;j++)
            {
                double tn=v[j];
                double n1=j-i+1;
                double d= (tn-a)/(n1-1);

                //cout<<" for i and j value "<<i<<" "<<j<<" n value "<<n1<<" d value "<<d<<"\n";
                c1=0;
                for(k=0;k<n;k++)
                {
                    double ans;
                    if(k<ind)
                    {
                        ll n2=(ind-k+1);
                        ans=a-(n2-1)*d;
                    }
                    else if(k==ind)
                    {
                        continue;
                    }
                    else{
                        ll n2=(k-ind+1);
                        ans=a+(n2-1)*d;
                    }
                    //cout<<ans<<" ";
                    if(ans!=v[k])
                    {
                        c1++;
                    }

                }
                c=min(c,c1);
                //cout<<"\n";
            }

        }
        cout<<c<<endl;
    }
}
