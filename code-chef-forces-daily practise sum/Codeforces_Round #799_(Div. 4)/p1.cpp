#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a && c>a && d>a)
        {
            cout<<"3\n";
        }
        else if((c>a && d>a)||(b>a && d>a) ||(b>a && c>a))
        {
            cout<<"2\n";
        }
        else if(b>a||c>a||d>a)
        {
            cout<<"1\n";
        }
        else {
            cout<<"0\n";
        }
    }
}