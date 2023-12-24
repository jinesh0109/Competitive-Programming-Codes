#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,flag=1;
        cin>>n;
        if(n==1)
        {
                cout<<"1\n";
                continue;
        }
        for(i=1;i<=17;i++)
        {
            if(n==pow(2,i))
            {
                cout<<"-1\n";
                flag=0;
                break;
            }
            else if(n<pow(2,i))
                break;
        }
        int c=3;
        if(flag==1)
        {

            if(n==3)
            {
                cout<<"1 3 2\n";
                continue;
            }

                cout<<"2 3 1 5 4 ";

            for(i=6;i<=n;i++)
            {

                if(i==pow(2,c))
                {
                    cout<<i+1<<" "<<i<<" ";
                    c++;
                    i++;
                }
                else{
                    cout<<i<<" ";
                }
            }
            cout<<"\n";
        }
    }
}
