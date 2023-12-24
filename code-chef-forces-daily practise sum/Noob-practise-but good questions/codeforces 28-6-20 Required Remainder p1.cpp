#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,n,i,divisor,num;
        cin>>x>>y>>n;
        divisor=n/x;
        if(n<x && y==0)
        {
            cout<<"0\n";
            continue;
        }
        if((divisor*x)+y<=n)
        {
            num=(divisor*x)+y;
            if(num%x==y)
            {
                cout<<num<<endl;
            }
            else{
                cout<<((divisor-1)*x)+y<<endl;
            }
        }
        else{
             cout<<((divisor-1)*x)+y<<endl;
        }
    }
}
