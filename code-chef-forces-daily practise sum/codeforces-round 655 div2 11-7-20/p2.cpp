#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            long long int n,i,f=1,c=1000000000000000000;
            cin>>n;
            if(n%2==0)
            {
                cout<<n/2<<" "<<n/2<<endl;
            }
            else{
                for(i=2;i<=(sqrt(n));i++)
                {
                    if(n%i==0)
                    {
                       cout<<n/i<<" "<<n-(n/i)<<endl;
                        f=0;
                        break;

                    }

                }
                if(f==1)
                {
                    cout<<"1 "<<n-1<<endl;
                }

            }


    }
}
