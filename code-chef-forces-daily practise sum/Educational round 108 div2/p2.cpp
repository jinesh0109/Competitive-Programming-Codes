#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int ans=(n-1)*1+(m-1)*n;
        int ans1=(m-1)*1+(n-1)*m;
        if(k==ans || k==ans1)
        {
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}

