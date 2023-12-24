#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;
        if(x==y && x==z)
        {
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<x<<endl;
        }
        else if(x==y && z<x)
        {
            cout<<"YES\n";
            cout<<x<<" "<<z<<" "<<z<<endl;
        }
        else if(x==y && z>x)
        {
            cout<<"NO\n";
        }
        else if(x==z && y<x)
        {
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<y<<endl;
        }
        else if(x==z && y>x)
        {
            cout<<"NO\n";
        }
        else if(y==z && x<y)
        {
            cout<<"YES\n";
            cout<<y<<" "<<x<<" "<<x<<endl;
        }
        else if(y==z && x>y)
        {
            cout<<"NO\n";
        }
        else if(x!=y && y!=z)
        {
            cout<<"NO\n";
        }
    }
}
