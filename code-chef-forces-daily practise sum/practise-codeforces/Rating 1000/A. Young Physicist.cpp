#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y,z,i;
    long long s=0,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        s+=x;
        s1+=y;
        s2+=z;
    }
    if(s==0 && s1==0 && s2==0)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}
