#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,x;
        cin>>n>>x;
        long long int c=1;
        if(n-2>0)
        {
            n=n-2;
            c+=(long long int)(ceil(n/x));
            cout<<c<<endl;
        }
        else{
            cout<<"1\n";
        }
    }
}
