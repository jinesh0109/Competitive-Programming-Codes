#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll a[3],b[3];
    for(i=0;i<3;i++)
    {
        cin>>a[i];

    }

    for(i=0;i<3;i++)
    {
        cin>>b[i];

    }
    ll Minwin=0,Maxwin=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>0)
        {
            if(a[i]>=b[(i+1)%3])
            {
                Maxwin+=b[(i+1)%3];
            }
            else if(a[i]<b[(i+1)%3])
            {
                Maxwin+=a[i];
            }
        }
    }
    Minwin=n-(min(a[0],b[0]+b[2])+min(a[1],b[0]+b[1])+min(a[2],b[2]+b[1]));
    cout<<Minwin<<" "<<Maxwin<<endl;
}
