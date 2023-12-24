#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,d;
        if(n==9)
        {
            cout<<"2 4 2 1\n";
            continue;
        }
        if(n==6)
        {
            cout<<"1 3 1 1\n";
            continue;
        }
        int temp=n/3;
        if(n%3==0)
        {
            cout<<n-3*3<<" 3 3 3"<<endl;
        }
        else if(n%3==1)
        {
            cout<<temp<<" "<<temp<<" "<<temp<<" 1\n";
        }
        else{
                cout<<"1 "<<n-3<<" 1 1\n";
        }
    }
}
