#include<bits/stdc++.h>
using namespace std;
#include<string>
#include<iostream>
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int num1=0,num2=0;
        for(int i=0;i<3;i++)
        {
            char s1=s[i];
            int temp=s1;
            num1+=temp;
        }
        for(int i=3;i<6;i++)
        {
            char s1=s[i];
            int temp1=s1;
            num2+=temp1;
        }
        if(num1==num2)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}