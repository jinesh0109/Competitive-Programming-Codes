#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,sum=0,f=1;
    cin>>n;
    while(sum<=n)
    {
        if(sum==n)
        {
            cout<<"YES";

            f=0;
            break;
        }
        sum+=i;
        i++;

    }
    if(f==1)
    {
        cout<<"NO";
    }
}
