#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

    if(n>k)
    {
        if(n%k==0)
        {
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }

    }
    else if(k>=n)
    {
        if(k%n==0)
        {
            cout<<k/n<<endl;
        }
        else{
            cout<<k/n+1<<endl;
        }
    }
  }

}
