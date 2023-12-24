#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int sum=(a/2)*(b/2) + (a-(a/2))*(b-(b/2));
        cout<<sum<<endl;
    }
}
