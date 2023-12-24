#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int no2,no1;
        if(n%3==0)
        {
            no2=n/3;
            no1=n/3;
        }
        else if(n%3==1)
        {
            no2=n/3;
            no1=n/3+1;
        }
        else{
            no2=n/3+1;
            no1=n/3;
        }
        if(n%3==2)
        {
            for(int i=0;i<no2+no1;i++)
            {
                if(i%2==0)
                    cout<<"2";
                else
                    cout<<"1";
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<no2+no1;i++)
            {
                if(i%2==0)
                    cout<<"1";
                else
                    cout<<"2";
            }
            cout<<"\n";
        }
    }
}
