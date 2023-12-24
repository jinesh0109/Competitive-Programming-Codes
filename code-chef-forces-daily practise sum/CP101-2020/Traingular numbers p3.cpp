#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    int i=2;
    int flag=1;
    while(sum<=n)
    {
        if(sum==n)
        {
            cout<<"YES\n";
            flag=0;

        }
        sum=sum+i;
        i++;
    }
    if(flag==1)cout<<"NO\n";
}
