#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s,x;
    cin>>t>>s>>x;
    if(x==t)
    {
        cout<<"YES";
    }
    else if(x-t<s)
    {
        cout<<"NO";
    }
    else if((x-t)%s==0 || (x-t-1)%s==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
